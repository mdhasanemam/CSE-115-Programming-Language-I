/*Problem:During Bangladesh's ongoing fuel crisis, panic-buying drivers fill their tanks completely, causing petrol pumps to run dry within hours and leaving genuinely needy vehicles empty-handed in long queues.
This program models a petrol pump queue using a QueuedVehicle structure storing each vehicle's registration number, type, tank capacity, current fuel level, and fuel request. An array of 8 vehicles represents the live queue. The program sorts vehicles by fuel urgency (least fuel first), applies government ration caps per vehicle type, and fairly distributes available pump stock so every vehicle receives something rather than some getting full tanks while others get nothing.*/
#include <stdio.h>
#include <string.h>

#define SIZE 7

//  emergency=1 ,  normal=0
struct FuelQuotaTicket
{
    int tokenNo;
    char vehicleNo[20];
    char vehicleType[20];
    char fuelType[10];
    float requestedLiters;
    float approvedLiters;
    int emergency;
};

//regular-use amount by vehicle type
float getQuota(char vehicleType[])
{
    if (strcmp(vehicleType, "Motorcycle") == 0) return 3.0;
    if (strcmp(vehicleType, "Car") == 0) return 8.0;
    if (strcmp(vehicleType, "Pickup") == 0) return 9.0;
    if (strcmp(vehicleType, "Microbus") == 0) return 10.0;
    if (strcmp(vehicleType, "Bus") == 0) return 15.0;
    if (strcmp(vehicleType, "Ambulance") == 0) return 12.0;
    return 5.0;
}

// Give  fair amount
void approveFuel(struct FuelQuotaTicket list[], int n)
{
    int i;
    float limit;

    for (i = 0; i < n; i++)
    {
        limit = getQuota(list[i].vehicleType);

        if (list[i].requestedLiters < limit)
            list[i].approvedLiters = list[i].requestedLiters;
        else
            list[i].approvedLiters = limit;
    }
}

// emergency priority first and token number
void sortByPriority(struct FuelQuotaTicket list[], int n)
{
    int i, j;
    struct FuelQuotaTicket temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((list[j].emergency < list[j + 1].emergency) ||
                    (list[j].emergency == list[j + 1].emergency &&
                     list[j].tokenNo > list[j + 1].tokenNo))
            {

                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

// Search by vehicle number
int searchByVehicleNo(struct FuelQuotaTicket list[], int n, char key[])
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (strcmp(list[i].vehicleNo, key) == 0)
            return i;
    }

    return -1;
}

void printOne(struct FuelQuotaTicket x)
{
    printf("%-7d %-15s %-12s %-8s %-10.1f %-10.1f %-5s\n",
           x.tokenNo,
           x.vehicleNo,
           x.vehicleType,
           x.fuelType,
           x.requestedLiters,
           x.approvedLiters,
           x.emergency ? "Yes" : "No");
}

void printAll(struct FuelQuotaTicket list[], int n)
{
    int i;

    printf("--------------------------------------------------------------------------------\n");
    printf("%-7s %-15s %-12s %-8s %-10s %-10s %-5s\n",
           "Token", "VehicleNo", "Type", "Fuel", "Requested", "Approved", "Emer");
    printf("--------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printOne(list[i]);
    }

    printf("--------------------------------------------------------------------------------\n");
}

int main()
{
    struct FuelQuotaTicket queue[SIZE] =
    {
        {105, "DMGA214567", "Car",        "Octane", 20.0, 0.0, 0},
        {102, "DMTH998877", "Motorcycle", "Octane",  6.0, 0.0, 0},
        {101, "DMAA112233", "Ambulance",  "Diesel", 18.0, 0.0, 1},
        {106, "DMMB445566", "Microbus",   "Diesel", 25.0, 0.0, 0},
        {103, "DMPK778899", "Pickup",     "Diesel", 15.0, 0.0, 0},
        {104, "DMBS556677", "Bus",        "Diesel", 30.0, 0.0, 0},
        {108, "DMBS656688", "Ambulance",  "Diesel", 20.0, 0.0, 1}
    };

    char key[20];
    int pos;

    approveFuel(queue, SIZE);

    printf("Original records after fair fuel approval:\n");
    printAll(queue, SIZE);

    sortByPriority(queue, SIZE);
    printf("\nRecords after sorting by emergency priority and token number:\n");
    printAll(queue, SIZE);

    printf("\nEnter a vehicle number to search: ");
    scanf("%19s", key);

    pos = searchByVehicleNo(queue, SIZE, key);

    if (pos != -1)
    {
        printf("\nRecord found:\n");
        printf("--------------------------------------------------------------------------------\n");
        printf("%-7s %-15s %-12s %-8s %-10s %-10s %-5s\n",
               "Token", "VehicleNo", "Type", "Fuel", "Requested", "Approved", "Emer");
        printf("--------------------------------------------------------------------------------\n");
        printOne(queue[pos]);
        printf("--------------------------------------------------------------------------------\n");
    }
    else
    {
        printf("\nNo record found for vehicle number: %s\n", key);
    }

    return 0;
}
