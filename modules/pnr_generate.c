#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "book_ticket_header.h"



int pnr_generate()
{
    random read_pnr[100];
    FILE *gp=fopen("pnr_list.dat","rb");
    fread(read_pnr,sizeof(random),100,gp);
    fclose(gp);

    int final_inx;
    for(int j=0;j<100;j++)
    {
        if(read_pnr[j].available==1)
        {
            final_inx=j;
            break;
        }
    }
    read_pnr[final_inx].available=0;
    FILE *fp=fopen("pnr_list.dat","wb");
    fwrite(read_pnr,sizeof(random),100,gp);
    fclose(gp);
    return read_pnr[final_inx].random_num;


}