/*
programmer: Rao Ghulam Mohi Uddin
ID: 23k-0001
Desc: merges records of the same employees from two different info files into a new file
*/
#include <stdio.h>
#include <stdlib.h>

// Function to merge data from Personal.txt and Department.txt and write to Combine.txt
void mergeAndWriteToCombineFile(int employeeId) {
    // Open the Personal.txt file in read mode
    FILE *personalFile = fopen("Personal.txt", "r");
    if (personalFile == NULL) {
        printf("Error opening Personal.txt");
        exit(EXIT_FAILURE);
    }

    // Open the Department.txt file in read mode
    FILE *departmentFile = fopen("Department.txt", "r");
    if (departmentFile == NULL) {
        printf("Error opening Department.txt");
        fclose(personalFile);
        exit(EXIT_FAILURE);
    }

    // Open or create Combine.txt file in append mode
    FILE *combineFile = fopen("Combine.txt", "a");
    if (combineFile == NULL) {
        printf("Error opening Combine.txt");
        fclose(personalFile);
        fclose(departmentFile);
        exit(EXIT_FAILURE);
    }

    // Variables to store data values
    int personalId, departmentId, salary;
    char name[50];

    // Search for the given ID in Personal.txt
    while (fscanf(personalFile, "%d,%s", &personalId, name) == 2) {
        // If the ID is found in Personal.txt
        if (personalId == employeeId) {
            // Match found, now search for the ID in Department.txt
            fseek(departmentFile, 0, SEEK_SET);

            while (fscanf(departmentFile, "%d,%d", &departmentId, &salary) == 2) {
                // If the ID is found in Department.txt
                if (departmentId == employeeId) {
                    // Match found in Department.txt, write to Combine.txt
                    fprintf(combineFile, "%d,%s,%d\n", employeeId, name, salary);
                    printf("Record with ID %d merged and written to Combine.txt\n", employeeId);
                    break;
                }
            }
            break; // Break out of the loop since we found the ID in Personal.txt
        }
    }

    // Closing the opened files
    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}

int main() {
    int employeeId;

    printf("Rao Ghulam Mohi Uddin\n23k-0001\n\n");
    printf("Input isn't required as filing will do the entire work.\n\n");

    // Get the record ID as input
    printf("Enter the record ID: ");
    scanf("%d", &employeeId);

    // Call the function to merge and write to Combine.txt
    mergeAndWriteToCombineFile(employeeId);

    return 0;
}
