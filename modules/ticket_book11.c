#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<unistd.h>
#include<stdbool.h>
#include "book_ticket_header.h"

int int_yes_no(int fir,int sec)
{
    char check;
    scanf("%c",&check);
    if (check=='Y' || check=='y')
    {
        return fir;
    }
    else if(check=='N' || check=='n')
    {
        return sec;
    }
    else
    {
        printf("!!! invalid entry,ENTER Correctly : ");
        return int_yes_no(fir,sec);
    }
}
int abc(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int choice_trainnum,int checkpoint_ind,int ind,int tot_dist,char username[]);
int show_indivi_train(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int tot_dist,char username[]);

int abc(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int choice_trainnum,int checkpoint_ind,int ind,int tot_dist,char username[]){
    printf("verifyabc");

    if (checkpoint_ind==1)
    {
        printf("\nif entered\n");
        char train_file_name[20];
        sprintf(train_file_name, "%d%d%-d%d",day,month,year,choice_trainnum);
        char filename[25];
        snprintf(filename, sizeof(filename), "%s.dat", train_file_name);
        //char filename[100]="12693762024";


        if (access(filename, F_OK) != -1)
        {
            

            int count_compartment=1;
            int sl_count=0,ac3_count=0,ac2_count=0,ac1_count=0;
            int nr_count=0,acch_count=0,acex_count=0;
            //printf("value=%d\n",train_file.stops[0].sleeper[4][63]);
            if (trains_list[selected_train[ind]].day_night=='N')
            {
                night_file_train_detail train_file;

                FILE *fp = fopen(filename, "rb");
                if (fp == NULL) {
                    printf("Error opening file for reading.\n");
                    return 1;
                }

                fread(&train_file, sizeof(night_file_train_detail), 1, fp);
                fclose(fp);

                printf("fill value=%d\n", train_file.stops[6].sleeper[1][3]);
                for (int i = 0; i < 12; i++)
                {
                    for (int j = 0; j < 72; j++)
                    {
                        if (night_check_empty_count(train_file,depart_inx,dest_inx,i,j,1)==1)
                        {
                            sl_count++;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 64; j++)
                    {

                        //check_empty(train_file,depart_inx,dest_inx,i,j,3)

                        if (night_check_empty_count(train_file,depart_inx,dest_inx,i,j,2)==1)
                        {
                            ac3_count++;
                        }
                    }
                }

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 32; j++) 
                    {
                        if (night_check_empty_count(train_file,depart_inx,dest_inx,i,j,3)==1)
                        {
                            ac2_count++;
                        }
                    }
                }

                for (int i = 0; i < 1; i++)
                {
                    for (int j = 0; j < 16; j++) 
                    {
                        if (night_check_empty_count(train_file,depart_inx,dest_inx,i,j,4)==1)
                        {
                            ac1_count++;
                        }
                    }
                }
                printf("SLEEPER CLASS (SL) :\n");
                if (sl_count>0)
                {
                    printf("Available seats : %d",sl_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].sl_waitlist_count);
                }
                printf("\n\n");


                printf("AC 3 TIER CLASS (3_AC) :\n");
                if (ac3_count>0)
                {
                    printf("Available seats : %d",ac3_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].ac3_waitlist_count);
                }
                printf("\n\n");


                printf("AC 2 TIER CLASS (2_AC) :\n");
                if (ac2_count>0)
                {
                    printf("Available seats : %d",ac2_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].ac2_waitlist_count);
                }
                printf("\n\n");

                printf("AC FIRST CLASS (1_AC) :\n");
                if (ac1_count>0)
                {
                    printf("Available seats : %d",ac1_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].ac1_waitlist_count);
                }
                printf("\n\n");


                // ask for booking

                printf("Do you want to book ticket in this train (y/n) : ");
                if (char_yes_no('y','n'))
                {
                    night_seat_book(&train_file,trains_list[selected_train[ind]].day_night,depart_inx,dest_inx,ind,tot_dist,username,filename);
                    FILE *fp = fopen(filename, "wb");
                    if (fp == NULL)
                    {
                        printf("Error opening file for writing.\n");
                        return 1;
                    }

                    fwrite(&train_file,sizeof(night_file_train_detail),1,fp);

                    fclose(fp);

                }
                else
                {
                    show_indivi_train(trains_list,day,month,year,selected_train,selected_train_num,depart_inx,dest_inx,tot_dist,username);

                    
                }

            }


            else
            {
                day_file_train_detail train_file;

                FILE *fp = fopen(filename, "rb");
                if (fp == NULL) {
                    printf("Error opening file for reading.\n");
                    return 1;
                }

                fread(&train_file, sizeof(day_file_train_detail), 1, fp);
                fclose(fp);

                for (int i = 0; i < 7; i++)
                {
                    for (int j = 0; j < 120; j++) 
                    {
                        if (day_check_empty_count(train_file,depart_inx,dest_inx,i,j,5)==1)
                        {
                            nr_count++;
                        }
                    }
                }

                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 60; j++) 
                    {
                        if (day_check_empty_count(train_file,depart_inx,dest_inx,i,j,6)==1)
                        {
                            acch_count++;
                        }
                    }
                }

                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 45; j++) 
                    {
                        if (day_check_empty_count(train_file,depart_inx,dest_inx,i,j,7)==1)
                        {
                            acex_count++;
                        }
                    }
                }

                printf("NORMAL CLASS (NR) :\n");
                if (nr_count>0)
                {
                    printf("Available seats : %d",nr_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].nr_waitlist_count);
                }
                printf("\n\n");

                printf("AC CHAIRS CLASS (CH_AC) :\n");
                if (acch_count>0)
                {
                    printf("Available seats : %d",acch_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].acch_waitlist_count);
                }
                printf("\n\n");

                printf("AC EXCECUTIVE CLASS (EX_AC) :\n");
                if (acex_count>0)
                {
                    printf("Available seats : %d",acex_count);
                }
                else
                {
                    printf("WAITING LIST : %d",train_file.stops[depart_inx].acex_waitlist_count);
                }
                printf("\n\n");

                // ask for booking
                printf("Do you want to book ticket in this train (y/n) : ");
                if (char_yes_no('y','n'))
                {
                    day_seat_book(&train_file,trains_list[selected_train[ind]].day_night,depart_inx,dest_inx,ind,tot_dist,username,filename);
                    FILE *fp = fopen(filename, "wb");
                    if (fp == NULL)
                    {
                        printf("Error opening file for writing.\n");
                        return 1;
                    }

                    fwrite(&train_file,sizeof(day_file_train_detail),1,fp);

                    fclose(fp);

                }
                else
                {
                    show_indivi_train(trains_list,day,month,year,selected_train,selected_train_num,depart_inx,dest_inx,tot_dist,username);            
                }   
            }            
        }
        
        
        else //file not exists and create new file
        {
            printf("Ticket booking for this train is not open yet \n");
            show_indivi_train(trains_list,day,month,year,selected_train,selected_train_num,depart_inx,dest_inx,tot_dist,username);
        }
        
        
    }

    else
    {
        printf("Your Entered Train Number Incorrect , Enter Correct train number\n");
        show_indivi_train(trains_list,day,month,year,selected_train,selected_train_num,depart_inx,dest_inx,tot_dist,username);
    }

}
void call(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int choice_trainnum,int checkpoint_ind,int ind,int tot_dist,char username[]);

int show_indivi_train(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int tot_dist,char username[])
{
    int choice_trainnum;
    int checkpoint_ind=0;
    int ind;
    printf("Enter Train No : ");
    scanf("%d",&choice_trainnum);
    for (ind=0;ind<*selected_train_num;ind++)
    {
        if (choice_trainnum==trains_list[selected_train[ind]].train_no)
        {
            checkpoint_ind=1;
            break;
        }
    }
    printf("ind : %d\n",ind);
    printf("file train : %d\n",trains_list[selected_train[ind]].train_no);

    call(trains_list,day,month,year,selected_train,selected_train_num,depart_inx,dest_inx,choice_trainnum,checkpoint_ind,ind,tot_dist,username);
}
void call(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int choice_trainnum,int checkpoint_ind,int ind,int tot_dist,char username[]){
    printf("hi");
    abc(trains_list,day,month,year,selected_train,selected_train_num,depart_inx,dest_inx,choice_trainnum,checkpoint_ind,ind,tot_dist,username);
}








// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Invalid month
    }
}

// Function to validate the date
bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return false;
    }
    int daysInMonth = getDaysInMonth(month, year);
    if (day < 1 || day > daysInMonth) {
        return false;
    }
    return true;
}

// Function to calculate the day of the week
int dayOfWeek(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int f = d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;
    return f % 7;
}



int book_ticket(train_struct trains_list[], int num_train, int selected_train[], int *selected_train_num,char username[]);




int check_day(train_struct trains_list[],int depart_train_inx,date_type date,int *checkpoint_day,int num_train,int selected_train[],int *selected_train_num)
{
    // if (!isValidDate(date.day,date.month,date.year)) {
    //     printf("Invalid date!!! \n");
    //     book_ticket(trains_list,num_train,selected_train,selected_train_num);
    //     return 0;
    // }
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int weekDay = dayOfWeek(date.day,date.month,date.year);

    printf("%s\n",days[weekDay]);
    for (int i=0;i<7;i++)
    {
        if (strcmp(days[weekDay],trains_list[depart_train_inx].train_day[i])==0)
        {
            *checkpoint_day=1;
            return 1;
        }
    }
    return 0;
        
}


int check_dest(train_struct trains_list[],int depart_train_inx,int depart_stop_indx,char destination_station[],date_type date,int *direct_train,int *checkpoint_day,int num_train,int selected_train[],int *selected_train_num)
{
    for (int j=0;j<trains_list[depart_train_inx].no_station;j++)
    {
        if (strcmp(destination_station,trains_list[depart_train_inx].train_stops[j])==0)
        {
            //*checkpoint_dest=1;
            // 
            // printf("%s\n",trains_list[depart_train_inx].train_name);
            // printf("%s",trains_list[depart_train_inx].train_stops[j]);
            // printf("entered to another funct\n");
            //return 0;
            if (j>depart_stop_indx)
            {
                *direct_train=1;
                if (check_day(trains_list,depart_train_inx,date,checkpoint_day,num_train,selected_train,selected_train_num))
                {
                    
                    return 1;
                }

            }
        }
    }
    return 0;

}

void display_available_train(int train_inx,char departure_station[],char destination_station[],int selected_train[],int *selected_train_num)
{
    
    selected_train[*selected_train_num]=train_inx;
    (*selected_train_num)++;
}


int check_depart_exist(train_struct trains_list[],int num_train,char departure_station[])
{
     printf("Enter Departure Station Name : ");
     scanf(" %s",departure_station);
    strcpy(departure_station,"villupuram");
    int i=0;
    while(departure_station[i]!='\0')
    {
        departure_station[i]=toupper(departure_station[i]);
        i++;
    }
    for (int j=0;j<num_train;j++)
    {
        for (int k=0;k<trains_list[j].no_station;k++)
        {
            if (strcmp(departure_station,trains_list[j].train_stops[k])==0)
            {
                return 1;
            }
        }
    }
    printf("Departure Station Doesn't Exist.\nRe-");
    return check_depart_exist(trains_list,num_train,departure_station);
}


int check_dest_exist(train_struct trains_list[],int num_train,char destination_station[])
{
     printf("Enter Destination Station Name : ");
     scanf("%s",destination_station);
    strcpy(destination_station,"tuticorin");
    int i=0;
    while(destination_station[i]!='\0')
    {
        destination_station[i]=toupper(destination_station[i]);
        i++;
    }
    for (int j=0;j<num_train;j++)
    {
        for (int k=0;k<trains_list[j].no_station;k++)
        {
            if (strcmp(destination_station,trains_list[j].train_stops[k])==0)
            {
                return 1;
            }
        }
    }
    printf("Destination Station Doesn't Exist. \nRe-");
    return check_dest_exist(trains_list,num_train,destination_station);
}

int check_date_exist(date_type *date)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int current_day=tm.tm_mday;
    int current_month=tm.tm_mon+1;
    int current_year=tm.tm_year+1900;

     printf("Enter Date dd/mm/yyyy : ");
     scanf("%d/%d/%d",&date->day,&date->month,&date->year);
    if (!isValidDate(date->day,date->month,date->year)) {
        printf("Invalid date!!! \n");
        return check_date_exist(date);
    }
    if (date->year <current_year)
    {
        printf("Invalid!!!, You Were Entered previous Date\nRe-");
        return check_date_exist(date);
    }
    else if(date->year >current_year)
    {
        return 1;
    }
    else
    {
        if (date->month <current_month)
        {
            printf("Invalid!!!, You were Entered previous Date\nRe-");
            return check_date_exist(date);
        }
        else if (date->month >current_month)
        {
            return 1;
        }
        else
        {
            if (date->day <current_day)
            {
                printf("Invalid!!!, You Were Entered previous Date\nRe-");
                return check_date_exist(date);
            }
            else
            {
                return 1;
            }
        }
    }
}



int book_ticket(train_struct trains_list[],int num_train,int selected_train[],int *selected_train_num,char username[])
{
    static char departure_station[50];
    static char destination_station[50];
    static date_type date;
    static int reenter_day=0;

    if (reenter_day==0)
    {
        if (check_depart_exist(trains_list,num_train,departure_station))
        {
            if (check_dest_exist(trains_list,num_train,destination_station))
            {
                if (strcmp(departure_station,destination_station)!=0)
                {
                    if (check_date_exist(&date))
                    {
                        ;
                    }
                }
                else
                {
                    printf("!!! invalid ,  Departure and Destination are same\n");
                    return book_ticket(trains_list,num_train,selected_train,selected_train_num,username);
                }
            }
        }
    }
    else
    {
        reenter_day=0;
    }


    int direct_train=0,displayed_train=0;
    static int checkpoint_day=0;
    for (int i=0;i<num_train;i++)
    {
        //printf("%d",num_train);
        //printf("%s\n",trains_list[i].train_name);
        for (int j=0;j<trains_list[i].no_station;j++)
        {
            
            if (strcmp(departure_station,trains_list[i].train_stops[j])==0)
            {
                // printf("%s\n",trains_list[i].train_name);
                // printf("Stops : %s\n",trains_list[i].train_stops[j]);
                //printf("enter into loop\n");
                //checkpoint_depart=1;
                if (check_dest(trains_list,i,j,destination_station,date,&direct_train,&checkpoint_day,num_train,selected_train,selected_train_num))
                {
                    displayed_train=1;
                    display_available_train(i,departure_station,destination_station,selected_train,selected_train_num);
                }
            }
        }
    }

    // for (int k=0;k<num_train;k++)
    // {
    //     for (int k1=0;k1<trains_list[k].no_station;k1++)
    //     {
    //         if (strcmp(destination_station,trains_list[k].train_stops[k1])==0)
    //         {
    //             checkpoint_dest=1;
    //         }
    //     }
    // }


    if (direct_train==0)
    {
        printf("There is no Direct Train Route Between %s and %s \n",departure_station,destination_station);
        printf("You Want to see Indirect Trains (y/n) : ");
        if(char_yes_no('y','n'))
        {
            search_indirect(trains_list,num_train,departure_station,destination_station);
        }
        book_ticket(trains_list,num_train,selected_train,selected_train_num,username);
    }
    else if (checkpoint_day==0)
    {
        printf("There is no Available Train on Given Date \n Enter other date\n");
        check_date_exist(&date);
        reenter_day=1;
        book_ticket(trains_list,num_train,selected_train,selected_train_num,username);
    }
    else{
        int start_dist,end_dist;
        printf("=========Available trains are =========\n");
        int depart_inx,dest_inx;
        printf("selected trin : %d",*selected_train_num);
        for (int z=0;z<*selected_train_num;z++)
        {
            float start_time=0,end_time=0;
            printf("Train No : %d\n",trains_list[selected_train[z]].train_no);
            printf("Train Name : %s\n",trains_list[selected_train[z]].train_name);

            for (depart_inx=0;depart_inx<trains_list[selected_train[z]].no_station;depart_inx++)
            {
                if (strcmp(departure_station,trains_list[selected_train[z]].train_stops[depart_inx])==0)
                {
                    printf("Start Time\n");
                    printf("%s : %2.2f\n",departure_station,trains_list[selected_train[z]].train_time[depart_inx]);
                    start_time=trains_list[selected_train[z]].train_time[depart_inx];
                    start_dist=trains_list[selected_train[z]].dist[depart_inx];
                    break;
                }
            }
            for (dest_inx=0;dest_inx<trains_list[selected_train[z]].no_station;dest_inx++)
            {
                if (strcmp(destination_station,trains_list[selected_train[z]].train_stops[dest_inx])==0)
                {
                    printf("End Time\n");
                    printf("%s : %2.2f\n",destination_station,trains_list[selected_train[z]].train_time[dest_inx]);
                    end_time=trains_list[selected_train[z]].train_time[dest_inx];
                    end_dist=trains_list[selected_train[z]].dist[dest_inx];
                    break;
                }
            }
            float duration=end_time-start_time;
            if (duration<0)
            {
                duration+=24;
            }
            printf("Duration : %2.2f\n",duration);
        }
        printf("verify");
        //abc(trains_list, date.day, date.month, date.year, selected_train, selected_train_num, depart_inx, dest_inx);
        int tot_dist=end_dist-start_dist;
        show_indivi_train(trains_list, date.day, date.month, date.year, selected_train, selected_train_num, depart_inx, dest_inx,tot_dist,username);
        printf("verify123");
    }
}



int main()
{
    train_struct trains_list[100];
    int num_train=10;
    int selected_train[10];
    int selected_train_num=0;
    FILE *fp = fopen("trains_list.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(trains_list, sizeof(train_struct), 10, fp); 

    fclose(fp);

    //printf("%s",trains_list[5].train_stops[4]);
    char username[50];
    book_ticket(trains_list,num_train,selected_train,&selected_train_num,"vijay123");
    printf("second\n");
   // book_ticket(trains_list,num_train,selected_train,&selected_train_num);

}