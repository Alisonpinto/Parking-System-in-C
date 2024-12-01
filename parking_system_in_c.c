#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int main();
void Riksha();
void Bike();
void Bus();
void car();
void Show_Status();
void Delete_Data();
int menu();
void showMenuOnce(); // Display the menu

int noriksha = 0, nobus = 0, nobike = 0, nocar = 0, amount = 0, count = 0; // Global variables

int main() {
    int choice;

    while (1) {
        // Use ANSI escape codes to clear the screen
        printf("\033[H\033[J"); // Moves the cursor to the top left and clears the screen
        showMenuOnce(); // Display the menu

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Riksha();
                break;
            case 2:
                Bike();
                break;
            case 3:
                Bus();
                break;
            case 4:
                car();
                break;
            case 5:
                Show_Status();
                break;
            case 6:
                Delete_Data();
                break;
            case 7:
                exit(0); // Exit the program
            default:
                printf("\nInvalid choice");
        }

        // Wait for user input before refreshing the menu
        printf("\nPress Enter to continue...");
        getchar(); // Clear the newline character left by `scanf`
        getchar(); // Wait for the user to press Enter
    }
    return 0;
}

void showMenuOnce() {
    // Display the menu
    printf("************************************\n");
    printf("*           VEHICLE MENU           *\n");
    printf("************************************\n");
    printf("*  1. Riksha                      *\n");
    printf("*  2. Bike                        *\n");
    printf("*  3. Bus                         *\n");
    printf("*  4. Car                         *\n");
    printf("*  5. Show Status                 *\n");
    printf("*  6. Delete                      *\n");
    printf("*  7. Exit                        *\n");
    printf("************************************\n");
}

void Show_Status() {
    // Display the vehicle status
    printf("\n************************************");
    printf("\n*          VEHICLE STATUS          *");
    printf("\n************************************");
    printf("\n*  Number of Riksha      = %4d     *", noriksha);
    printf("\n*  Number of Bike        = %4d     *", nobike);
    printf("\n*  Number of Bus         = %4d     *", nobus);
    printf("\n*  Number of Car         = %4d     *", nocar);
    printf("\n*  Total Vehicles        = %4d     *", noriksha + nobike + nobus + nocar);
    printf("\n*  Total Amount Earned   = %4d     *", amount);
    printf("\n************************************\n");
}

void Delete_Data() {
    // Reset all data
    noriksha = 0;
    nobike = 0;
    nobus = 0;
    nocar = 0;
    amount = 0;
    count = 0;
    printf("\nAll data has been reset.");
}

void Riksha() {
    printf("\nRiksha added successfully.");
    noriksha++;
    amount += 30;
    count++;
}

void Bike() {
    printf("\nBike added successfully.");
    nobike++;
    amount += 10;
    count++;
}

void Bus() {
    printf("\nBus added successfully.");
    nobus++;
    amount += 80;
    count++;
}

void car() {
    printf("\nCar added successfully.");
    nocar++;
    amount += 50;
    count++;
}
