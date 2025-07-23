 #include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "book_ticket_header.h"
int f;
int pay_money(char *username,float a);


float payment(int n, int distance, char *seat_type, char *user) {
    char seats_type[][20] = {"normal", "ac", "executive", "sleeper", "ac 3-tier", "ac 2-tier", "ac 1-tier"};
    float cost_per_km[7] = {1.50, 3.00, 4.50, 2.50, 3.50, 4.50, 6.00};
    float total_payment = 0;

    for (int times = 0; times < n; times++) {
        for (int i = 0; i < 7; i++) {
            if (strcmp(seat_type, seats_type[i]) == 0) {
                float payment = distance * cost_per_km[i];
                printf("Payment for trip %d: %.2f\n", times + 1, payment);
                total_payment += payment;
                break;
            }
        }
    }

    printf("Total Payment: %.2f\n", total_payment);
    char response[10];
    printf("Do you proceed with total payment? (y/n): ");
    scanf("%s", response);
    if (strcmp(response, "y") == 0) {
        pay_money(user, total_payment);
        } else {
        printf("Payment cancelled.\n");
    }

    return total_payment;
}
int pay_money(char *username,float a){
    FILE *purse;
    char filenames[100];
    char extension[] = "wallet.dat";
    snprintf(filenames,sizeof(filenames),"%s%s",username,extension);
    purse=fopen(filenames,"wb+");
    if (purse == NULL) {
        perror("Error opening file");
        return 2;
    }
    int payments;
    float money;
    fscanf(purse,"%d",&payments);

    if(payments<a){
        printf("\nInsufficient balance");
        printf("\nPlease recharge your wallet at a near station");
        fclose(purse);
        return 0;
    }
    else if(payments>a){
        printf("\nPayment of %f has been successfully completed!!!",a);
        payments-=a;
        fprintf(purse,"Wallet Money : %d",payment);
        fclose(purse);
        return 1;
    }
}
