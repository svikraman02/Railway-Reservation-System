#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<time.h>
#include <unistd.h>
#include <stdbool.h>
#include "book_ticket_header.h"


int pnr_stat_main()
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
    for (int i=0;i<tot_pnr;i++)
    {
        if (pnr_num==pnr_stats[i].pnr_num)
        {
            printf("Conformed ticket %d\n",pnr_stats[i].confirm_tkt);
            printf("Waiting list %d\n",pnr_stats[i].wait_tkt);
            printf("Cancelled ticket %d\n",pnr_stats[i].cancel_tkt);
            //printf("FILE : %s",pnr_stats[i].train_filename);
        }
    }
}
