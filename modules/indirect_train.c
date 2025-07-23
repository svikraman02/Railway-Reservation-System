#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "book_ticket_header.h"


int common_train(train_struct trains_list[],int num_train,char departure_station[],char destination_station[],int stat_train,int dept_train_inx,int middle)
{
    for(int i=0;i<trains_list[stat_train].no_station;i++)
    {
        if (strcmp(trains_list[stat_train].train_stops[i],destination_station)==0)
        {
            printf("\n\n\t\t\t\t\tThe Indirect Train Route \n\n");
            printf("\t\t\t%s ----------> %s ----------> %s\n\n",departure_station,trains_list[dept_train_inx].train_stops[middle],destination_station);
            return 1;
        }
    }
    return 0;
}



int departtrain_stations(train_struct trains_list[],int num_train,char departure_station[],char destination_station[],int dept_train_inx)
{
    for (int i=0;i<trains_list[dept_train_inx].no_station;i++)// departure exists train
    {
        for (int j=0;j<num_train;j++)
        {
            for (int k=0;k<trains_list[j].no_station;k++)
            {
                if (strcmp(trains_list[dept_train_inx].train_stops[i],trains_list[j].train_stops[k])==0)
                {
                    if (common_train(trains_list,num_train,departure_station,destination_station,j,dept_train_inx,i))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;

}





int search_indirect(train_struct trains_list[],int num_train,char departure_station[],char destination_station[])
{
    for(int i=0;i<num_train;i++)
    {
        for (int j=0;j<trains_list[i].no_station;j++)
        { 
            if (strcmp(departure_station,trains_list[i].train_stops[j])==0)
            {
                if (departtrain_stations(trains_list,num_train,departure_station,destination_station,i))
                {
                    return 1;
                }
            }
        }
    }
}
// int main()
// {
//     train_struct trains_list[100];
//     int num_train=10;
//     int selected_train[10];
//     int selected_train_num=0;
//     FILE *fp = fopen("trains_list.dat", "rb");
//     if (fp == NULL) {
//         printf("Error opening file for reading.\n");
//         return 1;
//     }

//     fread(trains_list, sizeof(train_struct), 10, fp); 

//     fclose(fp);
//     char departure_station[50]="EGMORE";
//     char destination_station[50]="THIRUVANNAMALAI";
//     search_indirect(trains_list,num_train,departure_station,destination_station);

// }