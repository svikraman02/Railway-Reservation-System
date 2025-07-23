#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<time.h>
#include <unistd.h>
#include <stdbool.h>
#include "book_ticket_header.h"




int tkt_cancel();


int find_pnr_inx(int pnr,pnr_stat pnr_stats[],int tot_pnr)
{
    for (int i=0;i<tot_pnr;i++)
    {
        if (pnr==pnr_stats[i].pnr_num)
        {
            return i;
        }
    }
}

int day_add_cancel_seats(char filename[],int pnr_num,int cancel_tkts,int depart_inx,int dest_inx,int seat_type,int tot_pnr)
{
    day_file_train_detail train_file;
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&train_file, sizeof(day_file_train_detail), 1, fp);
    fclose(fp);
    int cancel_done=0;

    if(seat_type==5)
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<7;com++)
                {
                    for (int st=0;st<120;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].normal[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].nr_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].nr_waitlist[m]=train_file.stops[j].nr_waitlist[m+1];
                                }
                                train_file.stops[j].nr_waitlist_count--;
                                train_file.stops[j].normal[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                            }
                        }
                    }
                }
                
            }
        }
   
    }

    else if (seat_type==6)
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<5;com++)
                {
                    for (int st=0;st<60;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].ac_chairs[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].acch_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].acch_waitlist[m]=train_file.stops[j].acch_waitlist[m+1];
                                }
                                train_file.stops[j].acch_waitlist_count --;
                                train_file.stops[j].ac_chairs[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                            }
                        }
                    }
                }
                
            }
        }
   
    }
    
    else
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<5;com++)
                {
                    for (int st=0;st<60;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].ac_excecutive[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].acex_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].acex_waitlist[m]=train_file.stops[j].acex_waitlist[m+1];
                                }
                                train_file.stops[j].acex_waitlist_count--;
                                train_file.stops[j].ac_excecutive[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                            }
                        }
                    }
                }
                
            }
        }
   
    }

    FILE *ap = fopen(filename, "wb");
    if (ap == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&train_file,sizeof(day_file_train_detail),1,ap);

    fclose(ap);
}

int night_add_cancel_seats(char filename[],int pnr_num,int cancel_tkts,int depart_inx,int dest_inx,int seat_type,int tot_pnr)
{
    night_file_train_detail train_file;

    FILE *cp = fopen(filename, "rb");
    if (cp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&train_file, sizeof(night_file_train_detail), 1, cp);
    fclose(cp);

    int cancel_done=0;

    if(seat_type==1)
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<12;com++)
                {
                    for (int st=0;st<72;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].sleeper[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].sl_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].sl_waitlist[m]=train_file.stops[j].sl_waitlist[m+1];
                                }
                                train_file.stops[j].sl_waitlist_count--;
                                train_file.stops[j].sleeper[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                                
                            }
                        }
                    }
                }
                
            }
        }
   
    }

    else if (seat_type==2)
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<4;com++)
                {
                    for (int st=0;st<64;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].ac_3tier[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].ac3_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].ac3_waitlist[m]=train_file.stops[j].ac3_waitlist[m+1];
                                }
                                train_file.stops[j].ac3_waitlist_count--;
                                train_file.stops[j].ac_3tier[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                            }
                        }
                    }
                }
                
            }
        }
   
    }

    else if (seat_type==3)
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<3;com++)
                {
                    for (int st=0;st<32;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].ac_2tier[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].ac2_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].ac2_waitlist[m]=train_file.stops[j].ac2_waitlist[m+1];
                                }
                                train_file.stops[j].ac2_waitlist_count--;
                                train_file.stops[j].ac_2tier[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                            }
                        }
                    }
                }
                
            }
        }
   
    }
    
    else
    {
        for (int i=0;i<cancel_tkts;i++)
        {
            for (int j=depart_inx;j<dest_inx;j++)
            {
                for (int com=0;com<1;com++)
                {
                    for (int st=0;st<16;st++)
                    {
                        if(cancel_done<cancel_tkts)
                        {
                            if (train_file.stops[j].ac_first[com][st]==pnr_num)
                            {
                                int wait_pnr=train_file.stops[j].ac1_waitlist[0];
                                cancel_done++;
                                for(int m=0;m<10;m++)
                                {
                                    train_file.stops[j].ac1_waitlist[m]=train_file.stops[j].ac1_waitlist[m+1];
                                }
                                train_file.stops[j].ac1_waitlist_count--;
                                train_file.stops[j].ac_first[com][st]=wait_pnr;
                                
                                pnr_stat pnr_stats[100];
                                FILE *fp = fopen("pnr_stat_file.dat","rb");
                                if (fp == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
                                fclose(fp);
                                int pnr_inx=find_pnr_inx(pnr_num,pnr_stats,tot_pnr);
                                pnr_stats[pnr_inx].confirm_tkt++;
                                pnr_stats[pnr_inx].wait_tkt ++;

                                FILE *ap = fopen("pnr_stat_file.dat","wb");
                                if (ap == NULL)
                                {
                                    printf("Error opening file for reading.\n");
                                    return 1;
                                }
                                fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
                                fclose(ap);
                            }
                        }
                    }
                }
                
            }
        }
   
    }

    FILE *bp = fopen(filename, "wb");
    if (bp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&train_file,sizeof(night_file_train_detail),1,bp);

    fclose(bp);




}


int recall_fun()
{
    return tkt_cancel();
}


int tkt_cancel()
{
    pnr_stat pnr_stats[100];
    int pnr_num;
    printf("Enter PNR Number : ");
    scanf("%d",&pnr_num);
    
    FILE *bp = fopen("pnr_stat_file.dat", "rb");
    if (bp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fseek(bp, 0, SEEK_END);

    long len = ftell(bp);

    fclose(bp);
    int tot_pnr=len/sizeof(pnr_stat);


    FILE *fp = fopen("pnr_stat_file.dat","rb");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(pnr_stats, sizeof(pnr_stat), tot_pnr, fp);
    fclose(fp);

    char trn_filename[20];
    int trn_inx=-1;

    for (int i=0;i<tot_pnr;i++)
    {
        if (pnr_num==pnr_stats[i].pnr_num)
        {
            trn_inx=i;
        }
    }

    if (trn_inx==-1)
    {
        printf("!!! Invalid, PNR Not Exists\nRe-");
        return recall_fun();
    }

    strcpy(trn_filename,pnr_stats[trn_inx].train_filename);
    int depart_inx=pnr_stats[trn_inx].depart_inx;
    int dest_inx=pnr_stats[trn_inx].dest_inx;
    int seat_type=pnr_stats[trn_inx].seat_type;
    if (pnr_stats[trn_inx].trn_type=='N')
    {
        night_file_train_detail train_file;
        FILE *fp = fopen(trn_filename, "rb");
        if (fp == NULL)
        {
            printf("Error opening file for writing.\n");
            return 1;
        }

        fread(&train_file,sizeof(night_file_train_detail),1,fp);

        fclose(fp);

        int confrm_tkt=pnr_stats[trn_inx].confirm_tkt;
        int wait_tkt=pnr_stats[trn_inx].wait_tkt;
        int choice;
        printf("Confirmed Ticket : %d\n",pnr_stats[trn_inx].confirm_tkt);
        printf("waitlist Ticket : %d\n",pnr_stats[trn_inx].wait_tkt);
        int cancel_tkt;
        printf("Enter 1 - To Cancel Confirmed Ticket\nEnter 2 - To Cancel waiting Ticket\n");
        printf("Enter Choice : ");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("How many ticket Want to Cancel : ");
            scanf("%d",&cancel_tkt);
            pnr_stats[trn_inx].confirm_tkt=pnr_stats[trn_inx].confirm_tkt-cancel_tkt;
            pnr_stats[trn_inx].cancel_tkt=pnr_stats[trn_inx].cancel_tkt+cancel_tkt;


        }
        else
        {
            printf("How many ticket Want to Cancel : ");
            scanf("%d",&cancel_tkt);
            pnr_stats[trn_inx].wait_tkt=pnr_stats[trn_inx].wait_tkt-cancel_tkt;
            pnr_stats[trn_inx].cancel_tkt=pnr_stats[trn_inx].cancel_tkt+cancel_tkt;
        }

        FILE *ap = fopen("pnr_stat_file.dat","wb");
        if (ap == NULL)
        {
            printf("Error opening file for reading.\n");
            return 1;
        }
        fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
        fclose(ap);
        night_add_cancel_seats(trn_filename,pnr_num,cancel_tkt,depart_inx,dest_inx,seat_type,tot_pnr);

    }
    else
    {
        day_file_train_detail train_file;
        FILE *fp = fopen(trn_filename, "rb");
        if (fp == NULL)
        {
            printf("Error opening file for writing.\n");
            return 1;
        }

        fread(&train_file,sizeof(day_file_train_detail),1,fp);

        fclose(fp);
        int confrm_tkt=pnr_stats[trn_inx].confirm_tkt;
        int wait_tkt=pnr_stats[trn_inx].wait_tkt;
        int choice;
        int cancel_tkt;
        printf("Confirmed Ticket : %d\n",pnr_stats[trn_inx].confirm_tkt);
        printf("waitlist Ticket : %d\n",pnr_stats[trn_inx].wait_tkt);
        printf("Enter 1 - To Cancel Confirmed Ticket\nEnter 2 - To Cancel waiting Ticket\n");
        printf("Enter Choice : ");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("How many ticket Want to Cancel : ");
            scanf("%d",&cancel_tkt);
            pnr_stats[trn_inx].confirm_tkt=pnr_stats[trn_inx].confirm_tkt-cancel_tkt;
            pnr_stats[trn_inx].cancel_tkt=pnr_stats[trn_inx].cancel_tkt+cancel_tkt;


        }
        else
        {
            printf("How many ticket Want to Cancel : ");
            scanf("%d",&cancel_tkt);
            pnr_stats[trn_inx].wait_tkt=pnr_stats[trn_inx].wait_tkt-cancel_tkt;
            pnr_stats[trn_inx].cancel_tkt=pnr_stats[trn_inx].cancel_tkt+cancel_tkt;
        }

        FILE *ap = fopen("pnr_stat_file.dat","wb");
        if (ap == NULL)
        {
            printf("Error opening file for reading.\n");
            return 1;
        }
        fwrite(pnr_stats, sizeof(pnr_stat), tot_pnr, ap);
        fclose(ap);
        day_add_cancel_seats(trn_filename,pnr_num,cancel_tkt,depart_inx,dest_inx,seat_type,tot_pnr);


    }

}
