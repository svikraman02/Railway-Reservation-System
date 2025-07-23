#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<unistd.h>
#include<stdbool.h>
#include "book_ticket_header.h"

int add_train_schedule()
{
    int day;
    int mon;
    int year;
    int train_num;
    char type;
    int no_stops;
    printf("Enter date (dd/mm/yyyy) : ");
    scanf("%d/%d/%d",&day,&mon,&year);
    printf("Enter train num : ");
    scanf("%d",&train_num);
    printf("Enter Train Type (D/N) : ");
    scanf(" %c",&type);
    printf("Enter no of stops : ");
    scanf("%d",&no_stops);

    char train_file_name[20];
    sprintf(train_file_name, "%d%d%d%d",day,mon,year,train_num);
    char filename[100];
    snprintf(filename, sizeof(filename), "%s.dat", train_file_name);
    if (type=='N')
    {
        night_file_train_detail train_file;
        night_initialize_train(&train_file,'N',no_stops);

        FILE *fp=fopen(filename,"wb");
        if(fp==NULL)
        {
            printf("Error in creating file\n");
            return 0;
        }
        else
        {
            fwrite(&train_file,sizeof(night_file_train_detail),1,fp);
            fclose(fp);
            printf("Train Schedule Added Successfully\n");
            return 1;
        }

    }
    else
    {
        day_file_train_detail train_file;
        day_initialize_train(&train_file,'D',no_stops);

        FILE *fp=fopen(filename,"wb");
        if(fp==NULL)
        {
            printf("Error in creating file\n");
            return 0;
        }
        else
        {
            fwrite(&train_file,sizeof(day_file_train_detail),1,fp);
            fclose(fp);
            printf("Train Schedule Added Successfully\n");
            return 1;
        }        
    }

}
