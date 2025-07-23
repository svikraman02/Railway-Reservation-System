#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<unistd.h>
#include<stdbool.h>
#include "book_ticket_header.h"






int class_check_night()
{
    int choice;
    scanf("%d",&choice);
    if (choice==1)
    {
        return 1;
    }
    else if (choice==2)
    {
        return 2;
    }
    else if (choice==3)
    {
        return 3;
    }
    else if (choice==4)
    {
        return 4;
    }
    else
    {
        printf("!!!invalid entry , Enter correctly : ");
        return class_check_night();
    }   
}



int night_check_empty_count(night_file_train_detail train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int comp_type)
{
    if (comp_type==1)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
           
            if (train_file.stops[i].sleeper[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }
    
    else if(comp_type==2)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (train_file.stops[i].ac_3tier[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }

    else if(comp_type==3)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (train_file.stops[i].ac_2tier[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }

    else if(comp_type==4)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (train_file.stops[i].ac_first[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }
}

// check a particular seat is empty or not between given station
int night_check_empty(night_file_train_detail *train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int comp_type)
{
    if (comp_type==1)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
           
            if (train_file->stops[i].sleeper[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }
    
    else if(comp_type==2)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (train_file->stops[i].ac_3tier[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }

    else if(comp_type==3)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (train_file->stops[i].ac_2tier[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }

    else if(comp_type==4)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (train_file->stops[i].ac_first[comp_num][seat_num]!=1)
            {
                return 0;
            }
        }
        return 1;
    }

    


}



// Fill a particular seat with pnr no between given station
int night_fill_empty(night_file_train_detail *train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int pnr,int comp_type)
{
    for (int i=depart_inx;i<dest_inx;i++)
    {
        if (comp_type==1)
        {
            train_file->stops[i].sleeper[comp_num][seat_num]=pnr;
        }
        
        else if (comp_type==2)
        {
            train_file->stops[i].ac_3tier[comp_num][seat_num]=pnr;
        }

        else if (comp_type==3)
        {
            train_file->stops[i].ac_2tier[comp_num][seat_num]=pnr;
        }

        else if (comp_type==4)
        {
            train_file->stops[i].ac_first[comp_num][seat_num]=pnr;
        }

        
    }
}


// Fill the wailist array with pnr no
int night_fill_wait(night_file_train_detail *train_file,int depart_inx,int dest_inx,int pnr,int remaining,int comp_type)
{
    for (int j=0;j<remaining;j++)
    {
        for (int i=depart_inx;i<dest_inx;i++)
        {
            if (comp_type==1)
            {
                int position=train_file->stops[i].sl_waitlist_count;
                train_file->stops[i].sl_waitlist[position]=pnr;
                train_file->stops[i].sl_waitlist_count=position+1;
            }

            else if (comp_type==2)
            {
                int position=train_file->stops[i].ac3_waitlist_count;
                train_file->stops[i].ac3_waitlist[position]=pnr;
                train_file->stops[i].ac3_waitlist_count=position+1;
            }

            else if (comp_type==3)
            {
                int position=train_file->stops[i].ac2_waitlist_count;
                train_file->stops[i].ac2_waitlist[position]=pnr;
                train_file->stops[i].ac2_waitlist_count=position+1;
            }

            else if (comp_type==4)
            {
                int position=train_file->stops[i].ac1_waitlist_count;
                train_file->stops[i].ac1_waitlist[position]=pnr;
                train_file->stops[i].ac1_waitlist_count=position+1;
            }

        }
    }
}



int night_seat_book(night_file_train_detail *train_file,char day_night,int depart_inx,int dest_inx,int train_inx,int tot_dist,char username[],char filename[])

{
    int class_select;
    if (day_night=='N')
    {
        printf("Enter  (SLEEPER - 1 ,AC 3TIER - 2 ,AC 2TIER - 3 ,AC FIRST - 4) : ");
        class_select=class_check_night();
    }
    int no_seat;   ///no of seats want
    printf("Enter no of seats you want : ");
    scanf("%d",&no_seat);
    char passenger_name[no_seat][20];
    int passenger_age[no_seat];
    char male_female[no_seat];
    char passenger_pwd[no_seat];

    for (int i=0;i<no_seat;i++)
    {
        printf("ENTER PASSENGER %d DETAILS : ",i+1);
        printf("NAME : ");
        scanf("%s",passenger_name[i]);
        printf("AGE : ");
        scanf("%d",&passenger_age[i]);
        printf("GENDER (Male - M /Female - F): ");
        male_female[i]=char_yes_no('m','f');
        printf("Person With Disability (PWD) (Y/N) : ");
        passenger_pwd[i]=char_yes_no('y','n');   
    }
    int comp_count;
    int fin_comp=-1;

    booked tkt_booked[no_seat];

    int pnr;
    int tkt_done=0;
    pnr_stat pnr_variable[100];
    int tot_pnr;

    FILE *bp = fopen("pnr_stat_file.dat", "rb");
    if (bp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fseek(bp, 0, SEEK_END);

    long len = ftell(bp);

    fclose(bp);
    tot_pnr=len/sizeof(pnr_variable);


    FILE *sp = fopen("pnr_stat_file.dat", "rb");
    if (sp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(pnr_variable,sizeof(pnr_stat),tot_pnr,sp);

    fclose(sp);


    if (day_night=='N')
    {
        //Night

        if (class_select==1)    //sleeper
        {
            for (int i=0;i<12;i++)
            {
                comp_count=0;
                for (int j=0;j<72;j++)
                {
                    if (train_file->stops[depart_inx].sleeper[i][j]==1)
                    {
                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,1))
                        {
                            comp_count++;
                        }
                    }
                }
                if (comp_count>=no_seat)
                {
                    fin_comp=i;
                    break;
                }
            }
            int booked_seats=no_seat;
            if (fin_comp!=-1)
            {
                if (payment(no_seat,tot_dist,"sleeper",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<72;i++)
                        {
                            if (train_file->stops[depart_inx].sleeper[fin_comp][i]==1)
                            {
                                if (night_check_empty(train_file,depart_inx,dest_inx,fin_comp,i,1))
                                {
                                    tkt_booked[k].coach_no=fin_comp+1;
                                    tkt_booked[k].seat_num=i+1;
                                    tkt_booked[k].type='S';
                                    tkt_done++;
                                    night_fill_empty(train_file,depart_inx,dest_inx,fin_comp,i,pnr,1);
                                    break;
                                }
                            }
                        }
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<no_seat;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                }
            }
            else
            {
                if (payment(no_seat,tot_dist,"sleeper",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    int confirm_tkt=0;
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<12;i++)
                        {
                            for (int j=0;j<72;j++)
                            {
                                if (confirm_tkt<no_seat)
                                {
                                    if (train_file->stops[depart_inx].sleeper[i][j]==1)
                                    {
                                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,1))
                                        {
                                            tkt_booked[k].coach_no=i+1;
                                            tkt_booked[k].seat_num=j+1;
                                            tkt_booked[k].type='S';
                                            tkt_done++;
                                            night_fill_empty(train_file,depart_inx,dest_inx,i,j,pnr,1);
                                            confirm_tkt++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int remaining=0;
                    if (confirm_tkt!=no_seat)
                    {
                        remaining=no_seat-confirm_tkt;
                        night_fill_wait(train_file,depart_inx,dest_inx,pnr,remaining,1);
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<confirm_tkt;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                    for(int l1=0;l1<remaining;l1++)
                    {
                        int wait=train_file->stops[depart_inx].sl_waitlist_count;
                        printf("%s  %d   -   WAITLIST%d",passenger_name[no_seat+l1-remaining],wait+1+l1-remaining);
                    }
                }
            }
        }




        else if(class_select==2)    //ac 3tier
        {
            for (int i=0;i<4;i++)
            {
                comp_count=0;
                for (int j=0;j<64;j++)
                {
                    if (train_file->stops[depart_inx].ac_3tier[i][j]==1)
                    {
                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,2))
                        {
                            comp_count++;
                        }
                    }
                }
                if (comp_count>=no_seat)
                {
                    fin_comp=i;
                    break;
                }
            }
            int booked_seats=no_seat;
            if (fin_comp!=-1)
            {
                if (payment(no_seat,tot_dist,"ac 3-tier",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<64;i++)
                        {
                            if (train_file->stops[depart_inx].ac_3tier[fin_comp][i]==1)
                            {
                                if (night_check_empty(train_file,depart_inx,dest_inx,fin_comp,i,2))
                                {
                                    tkt_booked[k].coach_no=fin_comp+1;
                                    tkt_booked[k].seat_num=i+1;
                                    tkt_booked[k].type='R';
                                    tkt_done++;
                                    night_fill_empty(train_file,depart_inx,dest_inx,fin_comp,i,pnr,2);
                                    break;
                                }
                            }
                        }
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<no_seat;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                }
            }
            else
            {
                if (payment(no_seat,tot_dist,"ac 3-tier",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    int confirm_tkt=0;
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<4;i++)
                        {
                            for (int j=0;j<64;j++)
                            {
                                if (confirm_tkt<no_seat)
                                {
                                    if (train_file->stops[depart_inx].ac_3tier[i][j]==1)
                                    {
                                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,2))
                                        {
                                            tkt_booked[k].coach_no=i+1;
                                            tkt_booked[k].seat_num=j+1;
                                            tkt_booked[k].type='R';
                                            tkt_done++;
                                            night_fill_empty(train_file,depart_inx,dest_inx,i,j,pnr,2);
                                            confirm_tkt++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int remaining=0;
                    if (confirm_tkt!=no_seat)
                    {
                        int remaining=no_seat-confirm_tkt;
                        night_fill_wait(train_file,depart_inx,dest_inx,pnr,remaining,2);
                    }
                    
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<confirm_tkt;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                    for(int l1=0;l1<remaining;l1++)
                    {
                        int wait=train_file->stops[depart_inx].sl_waitlist_count;
                        printf("%s  %d   -   WAITLIST%d",passenger_name[no_seat+l1-remaining],wait+1+l1-remaining);
                    }
                }
            }
        }




        else if(class_select==3)    //ac 2tier
        {
            for (int i=0;i<3;i++)
            {
                comp_count=0;
                for (int j=0;j<32;j++)
                {
                    if (train_file->stops[depart_inx].ac_2tier[i][j]==1)
                    {
                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,3))
                        {
                            comp_count++;
                        }
                    }
                }
                if (comp_count>=no_seat)
                {
                    fin_comp=i;
                    break;
                }
            }
            int booked_seats=no_seat;
            if (fin_comp!=-1)
            {
                if (payment(no_seat,tot_dist,"ac 2-tier",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<32;i++)
                        {
                            if (train_file->stops[depart_inx].ac_2tier[fin_comp][i]==1)
                            {
                                if (night_check_empty(train_file,depart_inx,dest_inx,fin_comp,i,3))
                                {
                                    tkt_booked[k].coach_no=fin_comp+1;
                                    tkt_booked[k].seat_num=i+1;
                                    tkt_booked[k].type='T';
                                    tkt_done++;
                                    night_fill_empty(train_file,depart_inx,dest_inx,fin_comp,i,pnr,3);
                                    break;
                                }
                            }
                        }
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<no_seat;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                }
            }
            else
            {
                if (payment(no_seat,tot_dist,"ac 2-tier",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    int confirm_tkt=0;
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<3;i++)
                        {
                            for (int j=0;j<32;j++)
                            {
                                if (confirm_tkt<no_seat)
                                {
                                    if (train_file->stops[depart_inx].ac_2tier[i][j]==1)
                                    {
                                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,3))
                                        {
                                            tkt_booked[k].coach_no=i+1;
                                            tkt_booked[k].seat_num=j+1;
                                            tkt_booked[k].type='T';
                                            tkt_done++;
                                            night_fill_empty(train_file,depart_inx,dest_inx,i,j,pnr,3);
                                            confirm_tkt++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int remaining=0;
                    if (confirm_tkt!=no_seat)
                    {
                        int remaining=no_seat-confirm_tkt;
                        night_fill_wait(train_file,depart_inx,dest_inx,pnr,remaining,3);
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<confirm_tkt;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                    for(int l1=0;l1<remaining;l1++)
                    {
                        int wait=train_file->stops[depart_inx].sl_waitlist_count;
                        printf("%s  %d   -   WAITLIST%d",passenger_name[no_seat+l1-remaining],wait+1+l1-remaining);
                    }
                }
            }
        }




        else if(class_select==4)    //ac first
        {
            for (int i=0;i<1;i++)
            {
                comp_count=0;
                for (int j=0;j<16;j++)
                {
                    if (train_file->stops[depart_inx].ac_first[i][j]==1)
                    {
                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,4))
                        {
                            comp_count++;
                        }
                    }
                }
                if (comp_count>=no_seat)
                {
                    fin_comp=i;
                    break;
                }
            }
            int booked_seats=no_seat;
            if (fin_comp!=-1)
            {
                if (payment(no_seat,tot_dist,"ac 1-tier",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<16;i++)
                        {
                            if (train_file->stops[depart_inx].ac_first[fin_comp][i]==1)
                            {
                                if (night_check_empty(train_file,depart_inx,dest_inx,fin_comp,i,4))
                                {
                                    tkt_booked[k].coach_no=fin_comp+1;
                                    tkt_booked[k].seat_num=i+1;
                                    tkt_booked[k].type='F';
                                    tkt_done++;
                                    night_fill_empty(train_file,depart_inx,dest_inx,fin_comp,i,pnr,4);
                                    break;
                                }
                            }
                        }
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<no_seat;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                }
            }
            else
            {
                if (payment(no_seat,tot_dist,"ac 1-tier",username))
                {
                    printf("Payment Successful \n");
                    pnr=pnr_generate(depart_inx,dest_inx,no_seat);
                    printf("Generated PNR number : %d\n\n",pnr);
                    int confirm_tkt=0;
                    for (int k=0;k<no_seat;k++)
                    {
                        for (int i=0;i<1;i++)
                        {
                            for (int j=0;j<16;j++)
                            {
                                if (confirm_tkt<no_seat)
                                {
                                    if (train_file->stops[depart_inx].ac_first[i][j]==1)
                                    {
                                        if (night_check_empty(train_file,depart_inx,dest_inx,i,j,4))
                                        {
                                            tkt_booked[k].coach_no=i+1;
                                            tkt_booked[k].seat_num=j+1;
                                            tkt_booked[k].type='F';
                                            tkt_done++;
                                            night_fill_empty(train_file,depart_inx,dest_inx,i,j,pnr,4);
                                            confirm_tkt++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int remaining=0;
                    if (confirm_tkt!=no_seat)
                    {
                        int remaining=no_seat-confirm_tkt;
                        night_fill_wait(train_file,depart_inx,dest_inx,pnr,remaining,4);
                    }
                    printf("    NAME    |    AGE    |   COACH NO    |   SEAT NO    \n");
                    for (int l=0;l<confirm_tkt;l++)
                    {
                        printf("%s    %d        %d        %d\n",passenger_name[l],passenger_age[l],tkt_booked[l].coach_no,tkt_booked[l].seat_num);
                    }
                    for(int l1=0;l1<remaining;l1++)
                    {
                        int wait=train_file->stops[depart_inx].sl_waitlist_count;
                        printf("%s  %d   -   WAITLIST%d",passenger_name[no_seat+l1-remaining],wait+1+l1-remaining);
                    }
                }
            }
        }
    }
    
    if (tkt_done==no_seat)
    {
        pnr_variable[tot_pnr].pnr_num=pnr;
        pnr_variable[tot_pnr].confirm_tkt=tkt_done;
        pnr_variable[tot_pnr].wait_tkt=0;
        pnr_variable[tot_pnr].cancel_tkt=0;
        strcpy(pnr_variable[tot_pnr].train_filename,filename);
        pnr_variable[tot_pnr].trn_type='N';
        pnr_variable[tot_pnr].seat_type=class_select;
    }
    else
    {
        pnr_variable[tot_pnr].pnr_num=pnr;
        pnr_variable[tot_pnr].confirm_tkt=tkt_done;
        pnr_variable[tot_pnr].wait_tkt=no_seat-tkt_done;
        pnr_variable[tot_pnr].cancel_tkt=0;
        strcpy(pnr_variable[tot_pnr].train_filename,filename);
        pnr_variable[tot_pnr].trn_type='N';
        pnr_variable[tot_pnr].seat_type=class_select;
    }

    tot_pnr++;

    FILE *ap = fopen("pnr_stat_file.dat","wb");
    if (ap == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fwrite(pnr_variable, sizeof(pnr_stat), tot_pnr, ap);
    fclose(ap);
    
    
    printf("Do u want to have food in your train journey? (y/n) : ");
    int tno,comp,seat_f;
    char fchoice,fsname[12],pchoice;
    scanf(" %c",&fchoice);
    if(fchoice=='y' || fchoice=='Y'){
        printf("Enter train number:");
        scanf("%d",&tno);
        printf("Enter the compartment and seat number:");
        scanf("%d %d",&comp,&seat_f);
        printf("Enter the station where you want to take food:");
        scanf("%s",fsname);
        food_order();
        printf("Your food will be delivered at %s station,compartment no:%d, seat_no:%d  in the train number %d\n",fsname,comp,seat_f,tno);
        printf("Thank you for ordering food and We hope you have a good experience.\n");

    }
    printf("Do u want to have porter service after u get down at station(y/n)");
    scanf(" %c",&pchoice);
    if(pchoice=='y' || pchoice=='Y'){
        printf("Enter train number:");
        scanf("%d",&tno);
        printf("Enter the compartment and seat number:");
        scanf("%d %d",&comp,&seat_f);
        printf("Enter the station where you want to take porter service");
        scanf("%s",fsname);
        porter_main();
        printf("Your porter will come at %s station,compartment no:%d, seat_no:%d in the train number %d\n",fsname,comp,seat_f,tno);
        printf("Thank you for using our porter service.\n");
    }

    

}




void night_initialize_train(night_file_train_detail *train_file, char day_night, int no_station) {
    if (day_night == 'N') {
        for (int s = 0; s < no_station; s++) {
            for (int i = 0; i < 12; i++) {
                for (int j = 0; j < 72; j++) {
                    train_file->stops[s].sleeper[i][j] = 1;
                }
            }
            train_file->stops[s].sl_waitlist_count = 0;

            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 64; j++) {
                    train_file->stops[s].ac_3tier[i][j] = 1;
                }
            }
            train_file->stops[s].ac3_waitlist_count = 0;

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 32; j++) {
                    train_file->stops[s].ac_2tier[i][j] = 1;
                }
            }
            train_file->stops[s].ac2_waitlist_count = 0;

            for (int i = 0; i < 1; i++) {
                for (int j = 0; j < 16; j++) {
                    train_file->stops[s].ac_first[i][j] = 1;
                }
            }
            train_file->stops[s].ac1_waitlist_count = 0;
        }
    } 
}

