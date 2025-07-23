#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book_ticket_header.h"


void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int food_order() {
    restaurant *hotels;
    int bill = 0, res_choice, cont, quantity, n;
    int num_hotels;

    // Opening the file for reading
    FILE *fp = fopen("restaurants.dat", "rb");
    if (fp == NULL) {
        printf("Sorry, we have an error opening your file.\n");
        return 1;
    }

    // Determine the number of hotels in the file
    fseek(fp, 0, SEEK_END);
    long file_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    num_hotels = file_size / sizeof(restaurant);

    // Allocate memory for hotels array based on the number of hotels
    hotels = (restaurant *)malloc(num_hotels * sizeof(restaurant));
    if (hotels == NULL) {
        printf("Memory allocation failed.\n");
        fclose(fp);
        return 1;
    }

    fread(hotels, sizeof(restaurant), num_hotels, fp);
    fclose(fp);

    printf("Welcome to Pre-booking of Food in your Train Journey:\n");
    printf("\nHere are the Restaurants which are Available:\n");
    for (int i = 0; i < num_hotels; i++) {
        printf("Enter %d for %s\n", i + 1, hotels[i].name);
    }

    printf("Where do you want to order from? ");
    scanf("%d", &res_choice);
    clear_input_buffer(); // Clear the buffer after reading an integer
    res_choice -= 1; // Adjust the index for array access

    if (res_choice < 0 || res_choice >= num_hotels) {
        printf("Invalid choice.\n");
        free(hotels);
        return 1;
    }

    printf("The Menu for %s Restaurant is:\n", hotels[res_choice].name);
    for (int j = 0; j < 8; j++) {
        printf("%d. %s: %d\n", j + 1, hotels[res_choice].meals[j].f_name, hotels[res_choice].meals[j].Price);
    }

    while (1) {
        printf("Enter 1 for ordering more items\nEnter 0 to finish\n");
        printf("Enter: ");
        scanf("%d", &cont);
        clear_input_buffer(); // Clear the buffer after reading an integer
        if (cont == 0) {
            break;
        } else {
            printf("Enter the item number you want to order: ");
            scanf("%d", &n);
            clear_input_buffer(); // Clear the buffer after reading an integer
            if (n < 1 || n > 8) {
                printf("Invalid item number.\n");
                continue;
            }
            printf("Enter Quantity: ");
            scanf("%d", &quantity);
            clear_input_buffer(); // Clear the buffer after reading an integer
            bill += (hotels[res_choice].meals[n - 1].Price) * (quantity);
        }
    }

    printf("Your Total Bill is %d Rupees.\n", bill);

    // Free allocated memory
    free(hotels);

    return 0;
}
