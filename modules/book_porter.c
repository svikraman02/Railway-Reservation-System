#include <stdio.h>
#include "book_ticket_header.h"

int porter_main(){
    Porter porters_list[5];
    int no_of_luggages;

    FILE *fp=fopen("porter_list.dat","rb+");
    if(fp==NULL){
        printf("Sorry we have an error opening your file.");
        return 1;
    }
    fread(porters_list,sizeof(Porter),5,fp);

    
   
    printf("Welcome to our Porter System:\n");
    printf("Enter the number of luggages:\n");
    scanf("%d",&no_of_luggages);
    int p_assigned=0;
    for(int i=0;i<5;i++){
        if(no_of_luggages<=porters_list[i].luggage_capacity && porters_list[i].availability==1){
            printf("Porter has been Assigned Successfully\n");
            printf("Here are the details:\n");
            printf("Porter Name: %s\n",porters_list[i].name);
            printf("Porter ID: %d\n",porters_list[i].ID);
            printf("Porter phone number: %s\n",porters_list[i].phone_number);
            porters_list[i].availability=0;
            fseek(fp, i * sizeof(Porter), SEEK_SET);
            fwrite(&porters_list[i], sizeof(Porter), 1, fp);
            p_assigned=1;
            printf("The cost for one luggage is 15 rupees\n");
            printf("The cost for ur Porter Service is %d\n",15*no_of_luggages);
            break;
        }
    }
    if(p_assigned==0){
        printf("Sorry we dont have any porter available as of now.\n");
    }
    
    fclose(fp);
    return 0;

}
