#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book_ticket_header.h"

int train_list() {

    train_struct trains_list[100];

    trains_list[0].train_no=12693;
    strcpy(trains_list[0].train_name, "PEARL CITY SUPERFAST EXPRESS");

    strcpy(trains_list[0].train_stops[0],"CHENNAI EGMORE");
    strcpy(trains_list[0].train_stops[1],"TAMBARAM");
    strcpy(trains_list[0].train_stops[2],"CHENGALPATTU JN");
    strcpy(trains_list[0].train_stops[3],"MADURANTAKAM");
    strcpy(trains_list[0].train_stops[4],"MELMARUVATHUR");
    strcpy(trains_list[0].train_stops[5],"TINDIVANAM");
    strcpy(trains_list[0].train_stops[6],"VILLUPURAM JN");
    strcpy(trains_list[0].train_stops[7],"VRIDHACHALAM");
    strcpy(trains_list[0].train_stops[8],"ARIYALUR");
    strcpy(trains_list[0].train_stops[9],"TIRUCHIRAPPALLI JN");
    strcpy(trains_list[0].train_stops[10],"DINDUGAL JN");
    strcpy(trains_list[0].train_stops[11],"MADURAI JN");
    strcpy(trains_list[0].train_stops[12],"THIRUMANGALAM");
    strcpy(trains_list[0].train_stops[13],"VIRUDHUNAGAR JN");
    strcpy(trains_list[0].train_stops[14],"SATHUR");
    strcpy(trains_list[0].train_stops[15],"KOVILPATTI");
    strcpy(trains_list[0].train_stops[16],"KADABPUR");
    strcpy(trains_list[0].train_stops[17],"VANCHI MANYIAACHI");
    strcpy(trains_list[0].train_stops[18],"TUTIMELUR");
    strcpy(trains_list[0].train_stops[19],"TUTICORIN");


    strcpy(trains_list[0].train_day[0],"Monday");
    strcpy(trains_list[0].train_day[1],"Tuesday");
    strcpy(trains_list[0].train_day[2],"Wednesday");
    strcpy(trains_list[0].train_day[3],"Thursday");
    strcpy(trains_list[0].train_day[4],"Friday");
    strcpy(trains_list[0].train_day[5],"Saturday");
    strcpy(trains_list[0].train_day[6],"Sunday");

    trains_list[0].train_time[0]=19.30;
    trains_list[0].train_time[1]=20.00;
    trains_list[0].train_time[2]=20.30;
    trains_list[0].train_time[3]=20.50;
    trains_list[0].train_time[4]=21.02;
    trains_list[0].train_time[5]=21.25;
    trains_list[0].train_time[6]=22.15;
    trains_list[0].train_time[7]=22.57;
    trains_list[0].train_time[8]=23.31;
    trains_list[0].train_time[9]=00.50;
    trains_list[0].train_time[10]=02.10;
    trains_list[0].train_time[11]=03.10;
    trains_list[0].train_time[12]=03.28;
    trains_list[0].train_time[13]=03.50;
    trains_list[0].train_time[14]=04.10;
    trains_list[0].train_time[15]=04.28;
    trains_list[0].train_time[16]=04.49;
    trains_list[0].train_time[17]=05.01;
    trains_list[0].train_time[18]=05.33;
    trains_list[0].train_time[19]=06.20;


    trains_list[0].dist[0]=0;
    trains_list[0].dist[1]=23;
    trains_list[0].dist[2]=55;
    trains_list[0].dist[3]=80;
    trains_list[0].dist[4]=91;
    trains_list[0].dist[5]=121;
    trains_list[0].dist[6]=158;
    trains_list[0].dist[7]=213;
    trains_list[0].dist[8]=266;
    trains_list[0].dist[9]=336;
    trains_list[0].dist[10]=430;
    trains_list[0].dist[11]=493;
    trains_list[0].dist[12]=510;
    trains_list[0].dist[13]=536;
    trains_list[0].dist[14]=563;
    trains_list[0].dist[15]=584;
    trains_list[0].dist[16]=607;
    trains_list[0].dist[17]=621;
    trains_list[0].dist[18]=651;
    trains_list[0].dist[19]=652;

    trains_list[0].train_type='S';
    trains_list[0].day_night='N';
    trains_list[0].no_station=20;


//Train 2
    trains_list[1].train_no=17651;
    strcpy(trains_list[1].train_name, "KACHEGUDA EXPRESS");

    strcpy(trains_list[1].train_stops[0],"PUDUCHERRY");
    strcpy(trains_list[1].train_stops[1],"VILLUPURAM JN");
    strcpy(trains_list[1].train_stops[2],"MELMARUVATHUR");
    strcpy(trains_list[1].train_stops[3],"CHENGALPATTU");
    strcpy(trains_list[1].train_stops[4],"TAMBARAM");
    strcpy(trains_list[1].train_stops[5],"CHENNAI EGMORE");
    strcpy(trains_list[1].train_stops[6],"ARAKKONAM");
    strcpy(trains_list[1].train_stops[7],"TIRUTANI");
    strcpy(trains_list[1].train_stops[8]," EKAMBARAKUPPAM");
    strcpy(trains_list[1].train_stops[9],"PUTTUR");
    strcpy(trains_list[1].train_stops[10],"RENIGUNTA");
    strcpy(trains_list[1].train_stops[11],"KODURU");
    strcpy(trains_list[1].train_stops[12],"RAZAMPETA");
    strcpy(trains_list[1].train_stops[13],"KADAPA");
    strcpy(trains_list[1].train_stops[14],"YERRAGUNTLA");
    strcpy(trains_list[1].train_stops[15],"TADIPATI");
    strcpy(trains_list[1].train_stops[16],"GOOTY");
    strcpy(trains_list[1].train_stops[17],"DHONE");
    strcpy(trains_list[1].train_stops[18],"KURNOOL CITY");
    strcpy(trains_list[1].train_stops[19],"GADWAL");
    strcpy(trains_list[1].train_stops[20],"MAHBUBNAGAR");
    strcpy(trains_list[1].train_stops[21],"JADCHERLA");
    strcpy(trains_list[1].train_stops[22],"SHADNAGAR");
    strcpy(trains_list[1].train_stops[23],"KACHEGUDA");

    strcpy(trains_list[1].train_day[0],"Monday");
    strcpy(trains_list[1].train_day[1],"Tuesday");
    strcpy(trains_list[1].train_day[2],"Wednesday");
    strcpy(trains_list[1].train_day[3],"Thursday");
    strcpy(trains_list[1].train_day[4],"Friday");
    strcpy(trains_list[1].train_day[5],"Saturday");
    strcpy(trains_list[1].train_day[6],"Sunday");

    trains_list[1].train_time[0]=13.00;
    trains_list[1].train_time[1]=13.50;
    trains_list[1].train_time[2]=14.35;
    trains_list[1].train_time[3]=15.30;
    trains_list[1].train_time[4]=16.00;
    trains_list[1].train_time[5]=16.40;
    trains_list[1].train_time[6]=18.05;
    trains_list[1].train_time[7]=18.25;
    trains_list[1].train_time[8]=18.45;
    trains_list[1].train_time[9]=19.05;
    trains_list[1].train_time[10]=19.55;
    trains_list[1].train_time[11]=20.30;
    trains_list[1].train_time[12]=21.00;
    trains_list[1].train_time[13]=21.45;
    trains_list[1].train_time[14]=22.25;
    trains_list[1].train_time[15]=23.30;
    trains_list[1].train_time[16]=00.20;
    trains_list[1].train_time[17]=02.20;
    trains_list[1].train_time[18]=03.05;
    trains_list[1].train_time[19]=04.10;
    trains_list[1].train_time[20]=05.15;
    trains_list[1].train_time[21]=05.30;
    trains_list[1].train_time[22]=06.10;
    trains_list[1].train_time[23]=07.50;

    trains_list[1].dist[0]=0;
    trains_list[1].dist[1]=37;
    trains_list[1].dist[2]=104;
    trains_list[1].dist[3]=140;
    trains_list[1].dist[4]=171;
    trains_list[1].dist[5]=196;
    trains_list[1].dist[6]=270;
    trains_list[1].dist[7]=284;
    trains_list[1].dist[8]=300;
    trains_list[1].dist[9]=314;
    trains_list[1].dist[10]=338;
    trains_list[1].dist[11]=379;
    trains_list[1].dist[12]=412;
    trains_list[1].dist[13]=463;
    trains_list[1].dist[14]=503;
    trains_list[1].dist[15]=571;
    trains_list[1].dist[16]=620;
    trains_list[1].dist[17]=675;
    trains_list[1].dist[18]=729;
    trains_list[1].dist[19]=784;
    trains_list[1].dist[20]=859;
    trains_list[1].dist[21]=877;
    trains_list[1].dist[22]=913;
    trains_list[1].dist[23]=965;



    trains_list[1].train_type='E';
    trains_list[1].day_night='N';
    trains_list[1].no_station=24;


trains_list[2].train_no = 12626;
strcpy(trains_list[2].train_name, "KERALA EXPRESS");

strcpy(trains_list[2].train_stops[0], "NEW DELHI");
strcpy(trains_list[2].train_stops[1], "MAThursdayRA JN");
strcpy(trains_list[2].train_stops[2], "AGRA CANTT");
strcpy(trains_list[2].train_stops[3], "GWALIOR JN");
strcpy(trains_list[2].train_stops[4], "JHANSI JN");
strcpy(trains_list[2].train_stops[5], "BHOPAL JN");
strcpy(trains_list[2].train_stops[6], "ITARSI JN");
strcpy(trains_list[2].train_stops[7], "NAGPUR");
strcpy(trains_list[2].train_stops[8], "BALHARSHAH");
strcpy(trains_list[2].train_stops[9], "WARANGAL");
strcpy(trains_list[2].train_stops[10], "VIKARABAD JN");
strcpy(trains_list[2].train_stops[11], "HYDERABAD DECAN");
strcpy(trains_list[2].train_stops[12], "KACHEGUDA");
strcpy(trains_list[2].train_stops[13], "MAHBUBNAGAR");
strcpy(trains_list[2].train_stops[14], "KURNOOL CITY");
strcpy(trains_list[2].train_stops[15], "ANANTAPUR");
strcpy(trains_list[2].train_stops[16], "DHARMAVARAM JN");
strcpy(trains_list[2].train_stops[17], "YASVANTPUR JN");
strcpy(trains_list[2].train_stops[18], "BANASWADI");
strcpy(trains_list[2].train_stops[19], "KRISHNARAJAPURAM");
strcpy(trains_list[2].train_stops[20], "BANGALORE CANT");
strcpy(trains_list[2].train_stops[21], "BANGALORE CY JN");
strcpy(trains_list[2].train_stops[22], "WHITEFIELD");
strcpy(trains_list[2].train_stops[23], "BANGARAPET");
strcpy(trains_list[2].train_stops[24], "KRISHNARAJANAGAR");
strcpy(trains_list[2].train_stops[25], "TIPTUR");
strcpy(trains_list[2].train_stops[26], "ARSIKERE JN");
strcpy(trains_list[2].train_stops[27], "BIRUR JN");
strcpy(trains_list[2].train_stops[28], "DAVANGERE");
strcpy(trains_list[2].train_stops[29], "HARIHAR");
strcpy(trains_list[2].train_stops[30], "RANIBENNUR");
strcpy(trains_list[2].train_stops[31], "HAVERI");
strcpy(trains_list[2].train_stops[32], "HUBLI JN");
strcpy(trains_list[2].train_stops[33], "DHARWAR");
strcpy(trains_list[2].train_stops[34], "LONDA JN");
strcpy(trains_list[2].train_stops[35], "ALNAVAR JN");
strcpy(trains_list[2].train_stops[36], "DHARMAWAR");
strcpy(trains_list[2].train_stops[37], "BELGAUM");
strcpy(trains_list[2].train_stops[38], "GOKAK ROAD");
strcpy(trains_list[2].train_stops[39], "MUGAD");
strcpy(trains_list[2].train_stops[40], "RAYBAG");
strcpy(trains_list[2].train_stops[41], "GULEDAGUDDA RD");
strcpy(trains_list[2].train_stops[42], "CHIKODI ROAD");
strcpy(trains_list[2].train_stops[43], "KUDACHI");
strcpy(trains_list[2].train_stops[44], "MIRAJ JN");
strcpy(trains_list[2].train_stops[45], "SANGLI");
strcpy(trains_list[2].train_stops[46], "KAVATHEMAHANKL");
strcpy(trains_list[2].train_stops[47], "HATKALANGDA");
strcpy(trains_list[2].train_stops[48], "SaturdayARA");
strcpy(trains_list[2].train_stops[49], "KARAD");
strcpy(trains_list[2].train_stops[50], "TALEGAON");
strcpy(trains_list[2].train_stops[51], "CHINCHVAD");
strcpy(trains_list[2].train_stops[52], "PUNE JN");
strcpy(trains_list[2].train_stops[53], "LONAVALA");
strcpy(trains_list[2].train_stops[54], "KALYAN JN");
strcpy(trains_list[2].train_stops[55], "THANE");
strcpy(trains_list[2].train_stops[56], "DADAR");
strcpy(trains_list[2].train_stops[57], "MUMBAI CST");

strcpy(trains_list[2].train_day[0],"Monday");
strcpy(trains_list[2].train_day[1],"Tuesday");
strcpy(trains_list[2].train_day[2],"Wednesday");
strcpy(trains_list[2].train_day[3],"Thursday");
strcpy(trains_list[2].train_day[4],"Friday");
strcpy(trains_list[2].train_day[5],"Saturday");
strcpy(trains_list[2].train_day[6],"Sunday");

trains_list[2].train_time[0] = 11.00;
trains_list[2].train_time[1] = 14.30;
trains_list[2].train_time[2] = 17.00;
trains_list[2].train_time[3] = 19.45;
trains_list[2].train_time[4] = 21.30;
trains_list[2].train_time[5] = 23.15;
trains_list[2].train_time[6] = 01.00;
trains_list[2].train_time[7] = 03.30;
trains_list[2].train_time[8] = 05.30;
trains_list[2].train_time[9] = 07.45;
trains_list[2].train_time[10] = 09.15;
trains_list[2].train_time[11] = 10.30;
trains_list[2].train_time[12] = 12.30;
trains_list[2].train_time[13] = 13.30;
trains_list[2].train_time[14] = 14.30;
trains_list[2].train_time[15] = 15.45;
trains_list[2].train_time[16] = 16.30;
trains_list[2].train_time[17] = 18.00;
trains_list[2].train_time[18] = 19.00;
trains_list[2].train_time[19] = 20.00;
trains_list[2].train_time[20] = 21.00;
trains_list[2].train_time[21] = 22.00;
trains_list[2].train_time[22] = 23.00;
trains_list[2].train_time[23] = 00.00;
trains_list[2].train_time[24] = 01.30;
trains_list[2].train_time[25] = 03.00;
trains_list[2].train_time[26] = 04.30;
trains_list[2].train_time[27] = 06.00;
trains_list[2].train_time[28] = 07.30;
trains_list[2].train_time[29] = 08.30;
trains_list[2].train_time[30] = 09.30;
trains_list[2].train_time[31] = 11.00;
trains_list[2].train_time[32] = 12.30;
trains_list[2].train_time[33] = 13.30;
trains_list[2].train_time[34] = 15.00;
trains_list[2].train_time[35] = 16.00;
trains_list[2].train_time[36] = 17.00;
trains_list[2].train_time[37] = 18.00;
trains_list[2].train_time[38] = 19.00;
trains_list[2].train_time[39] = 20.00;
trains_list[2].train_time[40] = 21.00;
trains_list[2].train_time[41] = 22.00;
trains_list[2].train_time[42] = 23.00;
trains_list[2].train_time[43] = 00.00;
trains_list[2].train_time[44] = 01.00;
trains_list[2].train_time[45] = 02.00;
trains_list[2].train_time[46] = 03.00;
trains_list[2].train_time[47] = 04.00;
trains_list[2].train_time[48] = 05.00;
trains_list[2].train_time[49] = 06.30;
trains_list[2].train_time[50] = 08.00;
trains_list[2].train_time[51] = 09.00;
trains_list[2].train_time[52] = 10.00;
trains_list[2].train_time[53] = 11.00;
trains_list[2].train_time[54] = 12.00;
trains_list[2].train_time[55] = 13.00;
trains_list[2].train_time[56] = 14.00;
trains_list[2].train_time[57] = 15.00;

trains_list[2].dist[0] = 0;
trains_list[2].dist[1] = 150;
trains_list[2].dist[2] = 200;
trains_list[2].dist[3] = 260;
trains_list[2].dist[4] = 300;
trains_list[2].dist[5] = 400;
trains_list[2].dist[6] = 500;
trains_list[2].dist[7] = 600;
trains_list[2].dist[8] = 700;
trains_list[2].dist[9] = 800;
trains_list[2].dist[10] = 850;
trains_list[2].dist[11] = 900;
trains_list[2].dist[12] = 950;
trains_list[2].dist[13] = 1000;
trains_list[2].dist[14] = 1100;
trains_list[2].dist[15] = 1200;
trains_list[2].dist[16] = 1300;
trains_list[2].dist[17] = 1400;
trains_list[2].dist[18] = 1450;
trains_list[2].dist[19] = 1500;
trains_list[2].dist[20] = 1550;
trains_list[2].dist[21] = 1600;
trains_list[2].dist[22] = 1650;
trains_list[2].dist[23] = 1700;
trains_list[2].dist[24] = 1750;
trains_list[2].dist[25] = 1800;
trains_list[2].dist[26] = 1850;
trains_list[2].dist[27] = 1900;
trains_list[2].dist[28] = 1950;
trains_list[2].dist[29] = 2000;
trains_list[2].dist[30] = 2050;
trains_list[2].dist[31] = 2100;
trains_list[2].dist[32] = 2150;
trains_list[2].dist[33] = 2200;
trains_list[2].dist[34] = 2250;
trains_list[2].dist[35] = 2300;
trains_list[2].dist[36] = 2350;
trains_list[2].dist[37] = 2400;
trains_list[2].dist[38] = 2450;
trains_list[2].dist[39] = 2500;
trains_list[2].dist[40] = 2550;
trains_list[2].dist[41] = 2600;
trains_list[2].dist[42] = 2650;
trains_list[2].dist[43] = 2700;
trains_list[2].dist[44] = 2750;
trains_list[2].dist[45] = 2800;
trains_list[2].dist[46] = 2850;
trains_list[2].dist[47] = 2900;
trains_list[2].dist[48] = 2950;
trains_list[2].dist[49] = 3000;
trains_list[2].dist[50] = 3050;
trains_list[2].dist[51] = 3100;
trains_list[2].dist[52] = 3150;
trains_list[2].dist[53] = 3200;
trains_list[2].dist[54] = 3250;
trains_list[2].dist[55] = 3300;
trains_list[2].dist[56] = 3350;
trains_list[2].dist[57] = 3400;




trains_list[2].train_type = 'E';
trains_list[2].day_night = 'D';
trains_list[2].no_station = 58;




trains_list[3].train_no = 12679;
strcpy(trains_list[3].train_name, "CHENNAI EXPRESS");

strcpy(trains_list[3].train_stops[0], "CHENNAI CENTRAL");
strcpy(trains_list[3].train_stops[1], "ARAKKONAM JN");
strcpy(trains_list[3].train_stops[2], "KATPADI JN");
strcpy(trains_list[3].train_stops[3], "VELLORE CANT");
strcpy(trains_list[3].train_stops[4], "SALEM JN");
strcpy(trains_list[3].train_stops[5], "ERODE JN");
strcpy(trains_list[3].train_stops[6], "TIRUPPUR");
strcpy(trains_list[3].train_stops[7], "COIMBATORE JN");

strcpy(trains_list[3].train_day[0], "Monday");
strcpy(trains_list[3].train_day[1], "Wednesday");
strcpy(trains_list[3].train_day[2], "Friday");

trains_list[3].train_time[0] = 06.00;
trains_list[3].train_time[1] = 07.45;
trains_list[3].train_time[2] = 09.30;
trains_list[3].train_time[3] = 11.15;
trains_list[3].train_time[4] = 13.00;
trains_list[3].train_time[5] = 15.00;
trains_list[3].train_time[6] = 17.00;
trains_list[3].train_time[7] = 19.00;

trains_list[3].dist[0] = 0;
trains_list[3].dist[1] = 67;
trains_list[3].dist[2] = 135;
trains_list[3].dist[3] = 190;
trains_list[3].dist[4] = 285;
trains_list[3].dist[5] = 350;
trains_list[3].dist[6] = 420;
trains_list[3].dist[7] = 490;




trains_list[3].train_type = 'E';
trains_list[3].day_night = 'D';
trains_list[3].no_station = 8;


trains_list[4].train_no = 12633;
strcpy(trains_list[4].train_name, "KANNIYAKUMARI SUPERFAST EXPRESS");

strcpy(trains_list[4].train_stops[0], "CHENNAI EGMORE");
strcpy(trains_list[4].train_stops[1], "TAMBARAM");
strcpy(trains_list[4].train_stops[2], "CHENGALPATTU JN");
strcpy(trains_list[4].train_stops[3], "VILLUPURAM JN");
strcpy(trains_list[4].train_stops[4], "ARIYALUR");
strcpy(trains_list[4].train_stops[5], "TIRUCHIRAPPALLI JN");
strcpy(trains_list[4].train_stops[6], "DINDIGUL JN");
strcpy(trains_list[4].train_stops[7], "MADURAI JN");
strcpy(trains_list[4].train_stops[8], "VIRUDHUNAGAR JN");
strcpy(trains_list[4].train_stops[9], "TIRUNELVELI JN");
strcpy(trains_list[4].train_stops[10], "NAGERCOIL JN");
strcpy(trains_list[4].train_stops[11], "NAGERCOIL TOWN");
strcpy(trains_list[4].train_stops[12], "KANYAKUMARI");

strcpy(trains_list[4].train_day[0], "Monday");
strcpy(trains_list[4].train_day[1], "Wednesday");
strcpy(trains_list[4].train_day[2], "Friday");

trains_list[4].train_time[0] = 06.00;
trains_list[4].train_time[1] = 06.30;
trains_list[4].train_time[2] = 07.45;
trains_list[4].train_time[3] = 09.30;
trains_list[4].train_time[4] = 11.15;
trains_list[4].train_time[5] = 13.00;
trains_list[4].train_time[6] = 15.00;
trains_list[4].train_time[7] = 16.45;
trains_list[4].train_time[8] = 17.45;
trains_list[4].train_time[9] = 19.30;
trains_list[4].train_time[10] = 20.30;
trains_list[4].train_time[11] = 21.15;
trains_list[4].train_time[12] = 22.30;

trains_list[4].dist[0] = 0;
trains_list[4].dist[1] = 27;
trains_list[4].dist[2] = 58;
trains_list[4].dist[3] = 157;
trains_list[4].dist[4] = 252;
trains_list[4].dist[5] = 345;
trains_list[4].dist[6] = 420;
trains_list[4].dist[7] = 515;
trains_list[4].dist[8] = 566;
trains_list[4].dist[9] = 673;
trains_list[4].dist[10] = 741;
trains_list[4].dist[11] = 756;
trains_list[4].dist[12] = 757;


trains_list[4].train_type = 'S';
trains_list[4].day_night = 'N';
trains_list[4].no_station = 13;

// Train 2
trains_list[5].train_no = 13579;
strcpy(trains_list[5].train_name, "SOUTHERN EXPRESS");

strcpy(trains_list[5].train_stops[0], "CHENNAI CENTRAL");
strcpy(trains_list[5].train_stops[1], "TIRUVALLUR");
strcpy(trains_list[5].train_stops[2], "ARAKKONAM");
strcpy(trains_list[5].train_stops[3], "KATPADI JN");
strcpy(trains_list[5].train_stops[4], "JOLARPETTAI");
strcpy(trains_list[5].train_stops[5], "SALEM JN");
strcpy(trains_list[5].train_stops[6], "ERODE JN");
strcpy(trains_list[5].train_stops[7], "TIRUPPUR");
strcpy(trains_list[5].train_stops[8], "COIMBATORE JN");
strcpy(trains_list[5].train_stops[9], "PALAKKAD JN");
strcpy(trains_list[5].train_stops[10], "THRISUR");
strcpy(trains_list[5].train_stops[11], "ALUVA");
strcpy(trains_list[5].train_stops[12], "ERNAKULAM TOWN");
strcpy(trains_list[5].train_stops[13], "ALLEPPEY");
strcpy(trains_list[5].train_stops[14], "KAYANKULAM");
strcpy(trains_list[5].train_stops[15], "KOLLAM JN");
strcpy(trains_list[5].train_stops[16], "THIRUVANANTHAPURAM CENTRAL");

strcpy(trains_list[5].train_day[0], "Sunday");
strcpy(trains_list[5].train_day[1], "Tuesday");
strcpy(trains_list[5].train_day[2], "Thursday");

trains_list[5].train_time[0] = 05.30;
trains_list[5].train_time[1] = 07.15;
trains_list[5].train_time[2] = 08.45;
trains_list[5].train_time[3] = 09.45;
trains_list[5].train_time[4] = 11.30;
trains_list[5].train_time[5] = 13.45;
trains_list[5].train_time[6] = 15.30;
trains_list[5].train_time[7] = 16.45;
trains_list[5].train_time[8] = 18.00;
trains_list[5].train_time[9] = 20.15;
trains_list[5].train_time[10] = 21.45;
trains_list[5].train_time[11] = 23.00;
trains_list[5].train_time[12] = 00.30;
trains_list[5].train_time[13] = 01.30;
trains_list[5].train_time[14] = 02.45;
trains_list[5].train_time[15] = 04.30;
trains_list[5].train_time[16] = 06.00;

trains_list[5].dist[0] = 0;
trains_list[5].dist[1] = 30;
trains_list[5].dist[2] = 70;
trains_list[5].dist[3] = 120;
trains_list[5].dist[4] = 190;
trains_list[5].dist[5] = 260;
trains_list[5].dist[6] = 320;
trains_list[5].dist[7] = 380;
trains_list[5].dist[8] = 440;
trains_list[5].dist[9] = 520;
trains_list[5].dist[10] = 580;
trains_list[5].dist[11] = 630;
trains_list[5].dist[12] = 700;
trains_list[5].dist[13] = 760;
trains_list[5].dist[14] = 810;
trains_list[5].dist[15] = 870;
trains_list[5].dist[16] = 920;


trains_list[5].train_type = 'E';
trains_list[5].day_night = 'D';
trains_list[5].no_station = 17;



// Train 4
trains_list[6].train_no = 16318;
strcpy(trains_list[6].train_name, "TAMIL NADU EXPRESS");

strcpy(trains_list[6].train_stops[0], "NEW DELHI");
strcpy(trains_list[6].train_stops[1], "MAThursdayRA JN");
strcpy(trains_list[6].train_stops[2], "AGRA CANTT");
strcpy(trains_list[6].train_stops[3], "GWALIOR JN");
strcpy(trains_list[6].train_stops[4], "JHANSI JN");
strcpy(trains_list[6].train_stops[5], "BHOPAL JN");
strcpy(trains_list[6].train_stops[6], "ITARSI JN");
strcpy(trains_list[6].train_stops[7], "NAGPUR");
strcpy(trains_list[6].train_stops[8], "BALHARSHAH");
strcpy(trains_list[6].train_stops[9], "VIJAYAWADA JN");
strcpy(trains_list[6].train_stops[10], "GUDUR JN");
strcpy(trains_list[6].train_stops[11], "CHENNAI CENTRAL");

strcpy(trains_list[6].train_day[0], "Sunday");
strcpy(trains_list[6].train_day[1], "Tuesday");
strcpy(trains_list[6].train_day[2], "Thursday");

trains_list[6].train_time[0] = 17.30;
trains_list[6].train_time[1] = 19.45;
trains_list[6].train_time[2] = 22.00;
trains_list[6].train_time[3] = 00.15;
trains_list[6].train_time[4] = 02.00;
trains_list[6].train_time[5] = 05.30;
trains_list[6].train_time[6] = 07.45;
trains_list[6].train_time[7] = 11.00;
trains_list[6].train_time[8] = 14.30;
trains_list[6].train_time[9] = 17.15;
trains_list[6].train_time[10] = 21.00;
trains_list[6].train_time[11] = 23.30;

trains_list[6].dist[0] = 0;
trains_list[6].dist[1] = 140;
trains_list[6].dist[2] = 200;
trains_list[6].dist[3] = 310;
trains_list[6].dist[4] = 400;
trains_list[6].dist[5] = 600;
trains_list[6].dist[6] = 750;
trains_list[6].dist[7] = 900;
trains_list[6].dist[8] = 1100;
trains_list[6].dist[9] = 1350;
trains_list[6].dist[10] = 1500;
trains_list[6].dist[11] = 1700;


trains_list[6].train_type = 'E';
trains_list[6].day_night = 'D';
trains_list[6].no_station = 12;

// Train 5
trains_list[7].train_no = 22691;
strcpy(trains_list[7].train_name, "BANGALORE RAJDHANI EXPRESS");

strcpy(trains_list[7].train_stops[0], "NEW DELHI");
strcpy(trains_list[7].train_stops[1], "MAThursdayRA JN");
strcpy(trains_list[7].train_stops[2], "AGRA CANTT");
strcpy(trains_list[7].train_stops[3], "JHANSI JN");
strcpy(trains_list[7].train_stops[4], "BHOPAL JN");
strcpy(trains_list[7].train_stops[5], "NAGPUR");
strcpy(trains_list[7].train_stops[6], "BALHARSHAH");
strcpy(trains_list[7].train_stops[7], "VIJAYAWADA JN");
strcpy(trains_list[7].train_stops[8], "RAJAHMUNDRY");
strcpy(trains_list[7].train_stops[9], "VISAKHAPATNAM");
strcpy(trains_list[7].train_stops[10], "VIZIANAGRAM JN");
strcpy(trains_list[7].train_stops[11], "BRAHMAPUR");
strcpy(trains_list[7].train_stops[12], "KHURDA ROAD JN");
strcpy(trains_list[7].train_stops[13], "BHUBANESWAR");
strcpy(trains_list[7].train_stops[14], "CUTTACK");
strcpy(trains_list[7].train_stops[15], "BHADRAK");
strcpy(trains_list[7].train_stops[16], "BALASORE");
strcpy(trains_list[7].train_stops[17], "KHARAGPUR JN");
strcpy(trains_list[7].train_stops[18], "HOWRAH JN");
strcpy(trains_list[7].train_stops[19], "BANGALORE CANT");

strcpy(trains_list[7].train_day[0], "Monday");
strcpy(trains_list[7].train_day[1], "Wednesday");
strcpy(trains_list[7].train_day[2], "Friday");

trains_list[7].train_time[0] = 20.45;
trains_list[7].train_time[1] = 22.15;
trains_list[7].train_time[2] = 23.30;
trains_list[7].train_time[3] = 01.45;
trains_list[7].train_time[4] = 05.00;
trains_list[7].train_time[5] = 08.30;
trains_list[7].train_time[6] = 11.30;
trains_list[7].train_time[7] = 15.15;
trains_list[7].train_time[8] = 17.45;
trains_list[7].train_time[9] = 20.30;
trains_list[7].train_time[10] = 22.45;
trains_list[7].train_time[11] = 01.00;
trains_list[7].train_time[12] = 03.30;
trains_list[7].train_time[13] = 05.15;
trains_list[7].train_time[14] = 07.00;
trains_list[7].train_time[15] = 09.30;
trains_list[7].train_time[16] = 11.00;
trains_list[7].train_time[17] = 13.00;
trains_list[7].train_time[18] = 15.30;
trains_list[7].train_time[19] = 20.00;

trains_list[7].dist[0] = 0;
trains_list[7].dist[1] = 150;
trains_list[7].dist[2] = 200;
trains_list[7].dist[3] = 300;
trains_list[7].dist[4] = 450;
trains_list[7].dist[5] = 650;
trains_list[7].dist[6] = 850;
trains_list[7].dist[7] = 1000;
trains_list[7].dist[8] = 1200;
trains_list[7].dist[9] = 1450;
trains_list[7].dist[10] = 1600;
trains_list[7].dist[11] = 1750;
trains_list[7].dist[12] = 1950;
trains_list[7].dist[13] = 2050;
trains_list[7].dist[14] = 2150;
trains_list[7].dist[15] = 2250;
trains_list[7].dist[16] = 2350;
trains_list[7].dist[17] = 2450;
trains_list[7].dist[18] = 2600;
trains_list[7].dist[19] = 2750;



trains_list[7].train_type = 'R';
trains_list[7].day_night = 'N';
trains_list[7].no_station = 20;

// Train 6
trains_list[8].train_no = 12321;
strcpy(trains_list[8].train_name, "HOWRAH MUMBAI MAIL");

strcpy(trains_list[8].train_stops[0], "HOWRAH JN");
strcpy(trains_list[8].train_stops[1], "KHARAGPUR JN");
strcpy(trains_list[8].train_stops[2], "BALASORE");
strcpy(trains_list[8].train_stops[3], "BHADRAK");
strcpy(trains_list[8].train_stops[4], "CUTTACK");
strcpy(trains_list[8].train_stops[5], "BHUBANESWAR");
strcpy(trains_list[8].train_stops[6], "KHURDA ROAD JN");
strcpy(trains_list[8].train_stops[7], "BRAHMAPUR");
strcpy(trains_list[8].train_stops[8], "VIZIANAGRAM JN");
strcpy(trains_list[8].train_stops[9], "VISAKHAPATNAM");
strcpy(trains_list[8].train_stops[10], "RAJAHMUNDRY");
strcpy(trains_list[8].train_stops[11], "VIJAYAWADA JN");
strcpy(trains_list[8].train_stops[12], "BALHARSHAH");
strcpy(trains_list[8].train_stops[13], "NAGPUR");
strcpy(trains_list[8].train_stops[14], "ITARSI JN");
strcpy(trains_list[8].train_stops[15], "BHOPAL JN");
strcpy(trains_list[8].train_stops[16], "JHANSI JN");
strcpy(trains_list[8].train_stops[17], "AGRA CANTT");
strcpy(trains_list[8].train_stops[18], "MAThursdayRA JN");
strcpy(trains_list[8].train_stops[19], "NEW DELHI");
strcpy(trains_list[8].train_stops[20], "DELHI");
strcpy(trains_list[8].train_stops[21], "MEERUT CITY");
strcpy(trains_list[8].train_stops[22], "SAHARANPUR");
strcpy(trains_list[8].train_stops[23], "AMBALA CANTT");
strcpy(trains_list[8].train_stops[24], "LUDHIANA JN");
strcpy(trains_list[8].train_stops[25], "JALANDHAR CITY");
strcpy(trains_list[8].train_stops[26], "PATHANKOT");
strcpy(trains_list[8].train_stops[27], "JAMMU TAWI");
strcpy(trains_list[8].train_stops[28], "KAThursdayA");
strcpy(trains_list[8].train_stops[29], "UDHAMPUR");
strcpy(trains_list[8].train_stops[30], "JAMMU");
strcpy(trains_list[8].train_stops[31], "AMRITSAR");

strcpy(trains_list[8].train_day[0],"Monday");
strcpy(trains_list[8].train_day[1],"Tuesday");
strcpy(trains_list[8].train_day[2],"Wednesday");
strcpy(trains_list[8].train_day[3],"Thursday");
strcpy(trains_list[8].train_day[4],"Friday");
strcpy(trains_list[8].train_day[5],"Saturday");
strcpy(trains_list[8].train_day[6],"Sunday");

trains_list[8].train_time[0] = 20.30;
trains_list[8].train_time[1] = 22.45;
trains_list[8].train_time[2] = 01.00;
trains_list[8].train_time[3] = 03.30;
trains_list[8].train_time[4] = 05.15;
trains_list[8].train_time[5] = 07.00;
trains_list[8].train_time[6] = 09.30;
trains_list[8].train_time[7] = 11.00;
trains_list[8].train_time[8] = 13.00;
trains_list[8].train_time[9] = 15.15;
trains_list[8].train_time[10] = 17.45;
trains_list[8].train_time[11] = 20.30;
trains_list[8].train_time[12] = 23.15;
trains_list[8].train_time[13] = 02.00;
trains_list[8].train_time[14] = 05.15;
trains_list[8].train_time[15] = 08.30;
trains_list[8].train_time[16] = 11.00;
trains_list[8].train_time[17] = 14.00;
trains_list[8].train_time[18] = 16.30;
trains_list[8].train_time[19] = 20.00;
trains_list[8].train_time[20] = 21.30;
trains_list[8].train_time[21] = 23.00;
trains_list[8].train_time[22] = 01.00;
trains_list[8].train_time[23] = 03.15;
trains_list[8].train_time[24] = 05.30;
trains_list[8].train_time[25] = 07.45;
trains_list[8].train_time[26] = 09.30;
trains_list[8].train_time[27] = 11.45;
trains_list[8].train_time[28] = 13.30;
trains_list[8].train_time[29] = 15.45;
trains_list[8].train_time[30] = 17.30;
trains_list[8].train_time[31] = 19.45;

trains_list[8].dist[0] = 0;
trains_list[8].dist[1] = 120;
trains_list[8].dist[2] = 200;
trains_list[8].dist[3] = 280;
trains_list[8].dist[4] = 350;
trains_list[8].dist[5] = 450;
trains_list[8].dist[6] = 520;
trains_list[8].dist[7] = 600;
trains_list[8].dist[8] = 650;
trains_list[8].dist[9] = 750;
trains_list[8].dist[10] = 850;
trains_list[8].dist[11] = 1000;
trains_list[8].dist[12] = 1100;
trains_list[8].dist[13] = 1300;
trains_list[8].dist[14] = 1450;
trains_list[8].dist[15] = 1600;
trains_list[8].dist[16] = 1750;
trains_list[8].dist[17] = 1900;
trains_list[8].dist[18] = 2050;
trains_list[8].dist[19] = 2200;
trains_list[8].dist[20] = 2350;
trains_list[8].dist[21] = 2500;
trains_list[8].dist[22] = 2650;
trains_list[8].dist[23] = 2800;
trains_list[8].dist[24] = 2950;
trains_list[8].dist[25] = 3100;
trains_list[8].dist[26] = 3250;
trains_list[8].dist[27] = 3400;
trains_list[8].dist[28] = 3550;
trains_list[8].dist[29] = 3700;
trains_list[8].dist[30] = 3850;
trains_list[8].dist[31] = 4000;



trains_list[8].train_type = 'E';
trains_list[8].day_night = 'N';
trains_list[8].no_station = 32;

// Train 7
trains_list[9].train_no = 12621;
strcpy(trains_list[9].train_name, "TAMIL NADU EXPRESS");

strcpy(trains_list[9].train_stops[0], "NEW DELHI");
strcpy(trains_list[9].train_stops[1], "AGRA CANTT");
strcpy(trains_list[9].train_stops[2], "JHANSI JN");
strcpy(trains_list[9].train_stops[3], "BHOPAL JN");
strcpy(trains_list[9].train_stops[4], "NAGPUR");
strcpy(trains_list[9].train_stops[5], "BALHARSHAH");
strcpy(trains_list[9].train_stops[6], "VIJAYAWADA JN");
strcpy(trains_list[9].train_stops[7], "CHENNAI CENTRAL");
strcpy(trains_list[9].train_stops[8], "TIRUCHIRAPPALLI JN");
strcpy(trains_list[9].train_stops[9], "MADURAI JN");
strcpy(trains_list[9].train_stops[10], "VIRUDHUNAGAR JN");
strcpy(trains_list[9].train_stops[11], "TIRUNELVELI JN");
strcpy(trains_list[9].train_stops[12], "NAGERCOIL JN");
strcpy(trains_list[9].train_stops[13], "KANYAKUMARI");

strcpy(trains_list[9].train_day[0],"Monday");
strcpy(trains_list[9].train_day[1],"Tuesday");
strcpy(trains_list[9].train_day[2],"Wednesday");
strcpy(trains_list[9].train_day[3],"Thursday");
strcpy(trains_list[9].train_day[4],"Friday");
strcpy(trains_list[9].train_day[5],"Saturday");
strcpy(trains_list[9].train_day[6],"Sunday");

trains_list[9].train_time[0] = 10.00;
trains_list[9].train_time[1] = 13.00;
trains_list[9].train_time[2] = 17.30;
trains_list[9].train_time[3] = 22.00;
trains_list[9].train_time[4] = 01.30;
trains_list[9].train_time[5] = 04.00;
trains_list[9].train_time[6] = 08.00;
trains_list[9].train_time[7] = 14.30;
trains_list[9].train_time[8] = 18.30;
trains_list[9].train_time[9] = 21.00;
trains_list[9].train_time[10] = 23.30;
trains_list[9].train_time[11] = 02.00;
trains_list[9].train_time[12] = 04.00;
trains_list[9].train_time[13] = 05.30;

trains_list[9].dist[0] = 0;
trains_list[9].dist[1] = 200;
trains_list[9].dist[2] = 400;
trains_list[9].dist[3] = 600;
trains_list[9].dist[4] = 800;
trains_list[9].dist[5] = 1000;
trains_list[9].dist[6] = 1300;
trains_list[9].dist[7] = 1600;
trains_list[9].dist[8] = 1800;
trains_list[9].dist[9] = 2000;
trains_list[9].dist[10] = 2200;
trains_list[9].dist[11] = 2400;
trains_list[9].dist[12] = 2600;
trains_list[9].dist[13] = 2800;


trains_list[9].train_type = 'E';
trains_list[9].day_night = 'N';

//                                          returnted train




    //Open the file in binary write mode
    FILE *fp = fopen("trains_list123.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the trains_list array to the file
    fwrite(trains_list, sizeof(train_struct), 10, fp); // Writing 2 trains_list

    // Close the file
    fclose(fp);

    printf("Data written to trains_list_data.txt successfully.\n");


}

int get_next_serial_number() {
    train_struct t;
    FILE *tl;
    int max_serial = 0;

    tl = fopen("Trainlist.txt", "r");
    if (tl == NULL) {
        return 1; // If file doesn't exist, start serial number from 1
    }

    while (fread(&t, sizeof(train_struct), 1, tl)) {
        if (t.train_no > max_serial) {
            max_serial = t.train_no;
        }
    }
    fclose(tl);
    return max_serial + 1;
}

void display() {
    train_struct train;
    FILE *tl;
    char train_name[100];
    int train_no;
    char filename[150];
    int display_stops;

    printf("Enter Train name: ");
    scanf("%[^\n]s", train_name);
    clear_input_buffer(); // Clear the buffer after reading a string

    printf("Enter Train number: ");
    scanf("%d", &train_no);
    clear_input_buffer(); // Clear the buffer after reading an integer

    tl = fopen("Trainlist123.dat", "ab+");
    if (tl == NULL) {
        perror("Error opening file");
        return;
    }

    printf("\n%-10s%-20s%-10s%-10s%-10s%-20s\n", "Train No", "Train Name", "Type", "Day/Night", "Stations", "Days");
    while (fread(& train, sizeof(train_struct), 1, tl)) {
        printf("%-10d%-20s%-10c%-10c%-10d",  train.train_no,  train.train_name,  train.train_type,  train.day_night,  train.no_station);
        for (int i = 0; i < 7; i++) {
            printf("%s ",  train.train_day[i]);
        }
        printf("\n");

        // If there are more stops, ask if user wants to display them
        if ( train.no_station > 0) {
            printf("This train has %d stops. Do you want to display them? (1 for yes, 0 for no): ",  train.no_station);
            scanf("%d", &display_stops);
            clear_input_buffer(); // Clear the buffer after reading an integer

            if (display_stops) {
                printf("\n%-10s%-10s%-10s\n", "Stop", "Distance", "Arrival Time");
                for (int i = 0; i <  train.no_station; i++) {
                    printf("%-10s%-10.2f%-10.2f\n",  train.train_stops[i],  train.dist[i],  train.train_time[i]);
                }
            }
        }
    }
    fclose(tl);
}

void append() {
    train_struct *train;
    int n, serial_number;
    FILE *tl;

    printf("Enter number of train_struct to be stored: ");
    scanf("%d", &n);
    clear_input_buffer(); 

    tl = fopen("Trainlist123.dat", "ab+");
    if (tl == NULL) {
        perror("Error opening file");
        return;
    }

    train = (train_struct *)calloc(n, sizeof(train_struct));
    if (train == NULL) {
        perror("Error allocating memory");
        fclose(tl);
        return;
    }

    serial_number = get_next_serial_number(tl);

    for (int i = 0; i < n; i++) {
        train[i].train_no = serial_number++;
        printf("Enter Train name: ");
        fgets(train[i].train_name, sizeof(train[i].train_name), stdin);
        train[i].train_name[strcspn(train[i].train_name, "\n")] = '\0'; 
        printf("Enter Train number: ");
        scanf("%d", &train[i].train_no);
        clear_input_buffer();
        printf("Enter number of stations: ");
        scanf("%d", &train[i].no_station);
        clear_input_buffer(); 
        for (int j = 0; j < train[i].no_station; j++) {
            printf("Enter Stop %d: ", j + 1);
            scanf("%s", train[i].train_stops[j]);
            clear_input_buffer();
            printf("Enter Distance to next stop: ");
            scanf("%f", &train[i].dist[j]);
            clear_input_buffer(); 
            printf("Enter Arrival Time at Stop: ");
            scanf("%f", &train[i].train_time[j]);
            clear_input_buffer();
        }
        printf("Enter Train type: ");
        scanf(" %c", &train[i].train_type);
        clear_input_buffer(); 
        printf("Enter Day/Night indicator: ");
        scanf(" %c", &train[i].day_night);
        clear_input_buffer();
        printf("Enter Days of Operation: ");
        for (int k = 0; k < 7; k++) {
            scanf("%s", train[i].train_day[k]);
            clear_input_buffer();
        }
        fwrite(&train[i], sizeof(train_struct), 1, tl);
    }
    free(train);
    fclose(tl);
}

int trains_handle() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display\n");
        printf("2. Append\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clear_input_buffer(); // Clear the buffer after reading an integer

        switch (choice) {
            case 1:
                display();
                break;
            case 2:
                append();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
int food_list() {
    restaurant hotels[5];

    // Restaurant Names
    strcpy(hotels[0].name, "A2B");
    strcpy(hotels[1].name, "Nandana Palace");
    strcpy(hotels[2].name, "Buhari");
    strcpy(hotels[3].name, "Dominos");
    strcpy(hotels[4].name, "Dindigul Thalappakatti");

    // Menu for A2B Restaurant
    strcpy(hotels[0].meals[0].f_name, "Idli");
    hotels[0].meals[0].Price = 30;
    strcpy(hotels[0].meals[1].f_name, "Dosa");
    hotels[0].meals[1].Price = 50;
    strcpy(hotels[0].meals[2].f_name, "Poori Masala");
    hotels[0].meals[2].Price = 60;
    strcpy(hotels[0].meals[3].f_name, "Pongal");
    hotels[0].meals[3].Price = 70;
    strcpy(hotels[0].meals[4].f_name, "Rava Kesari");
    hotels[0].meals[4].Price = 50;
    strcpy(hotels[0].meals[5].f_name, "Onion Dosa");
    hotels[0].meals[5].Price = 80;
    strcpy(hotels[0].meals[6].f_name, "Podi Masala Dosa");
    hotels[0].meals[6].Price = 85;
    strcpy(hotels[0].meals[7].f_name, "Sambar Vada");
    hotels[0].meals[7].Price = 50;

    // Menu for Nandana Palace Restaurant
    strcpy(hotels[1].meals[0].f_name, "Paneer Butter Masala");
    hotels[1].meals[0].Price = 150;
    strcpy(hotels[1].meals[1].f_name, "Butter Naan");
    hotels[1].meals[1].Price = 40;
    strcpy(hotels[1].meals[2].f_name, "Kulcha");
    hotels[1].meals[2].Price = 70;
    strcpy(hotels[1].meals[3].f_name, "Nellore Fish Curry");
    hotels[1].meals[3].Price = 360;
    strcpy(hotels[1].meals[4].f_name, "Andhra Chilli Chicken");
    hotels[1].meals[4].Price = 310;
    strcpy(hotels[1].meals[5].f_name, "Fresh Fruit Juice");
    hotels[1].meals[5].Price = 135;
    strcpy(hotels[1].meals[6].f_name, "Raw Mango Mojito");
    hotels[1].meals[6].Price = 130;
    strcpy(hotels[1].meals[7].f_name, "Fruit Salad");
    hotels[1].meals[7].Price = 50;

    // Menu for Buhari Restaurant
    strcpy(hotels[2].meals[0].f_name, "Honey Cake");
    hotels[2].meals[0].Price = 70;
    strcpy(hotels[2].meals[1].f_name, "Brownie");
    hotels[2].meals[1].Price = 65;
    strcpy(hotels[2].meals[2].f_name, "Choco Donut");
    hotels[2].meals[2].Price = 100;
    strcpy(hotels[2].meals[3].f_name, "Kulfi");
    hotels[2].meals[3].Price = 55;
    strcpy(hotels[2].meals[4].f_name, "Badam Milk");
    hotels[2].meals[4].Price = 45;
    strcpy(hotels[2].meals[5].f_name, "Virgin Mojito");
    hotels[2].meals[5].Price = 100;
    strcpy(hotels[2].meals[6].f_name, "Rainbow Cake");
    hotels[2].meals[6].Price = 110;
    strcpy(hotels[2].meals[7].f_name, "Blue Lagoon ");
    hotels[2].meals[7].Price = 85;

    // Menu for Dominos
    strcpy(hotels[3].meals[0].f_name, "Margherita Pizza");
    hotels[3].meals[0].Price = 200;
    strcpy(hotels[3].meals[1].f_name, "Pepperoni Pizza");
    hotels[3].meals[1].Price = 300;
    strcpy(hotels[3].meals[2].f_name, "Garlic Bread Sticks");
    hotels[3].meals[2].Price = 110;
    strcpy(hotels[3].meals[3].f_name, "Chicken Barbecue Pizza");
    hotels[3].meals[3].Price = 229;
    strcpy(hotels[3].meals[4].f_name, "Paneer Pizza");
    hotels[3].meals[4].Price = 160;
    strcpy(hotels[3].meals[5].f_name, "Choco Lava Brownie");
    hotels[3].meals[5].Price = 89;
    strcpy(hotels[3].meals[6].f_name, "Chicken Tikka Pizza");
    hotels[3].meals[6].Price = 260;
    strcpy(hotels[3].meals[7].f_name, "Corn Pizza");
    hotels[3].meals[7].Price = 90;

    // Menu for Dindigul Thalappakatti
    strcpy(hotels[4].meals[0].f_name, "Chicken Biryani");
    hotels[4].meals[0].Price = 250;
    strcpy(hotels[4].meals[1].f_name, "Mutton Biryani");
    hotels[4].meals[1].Price = 300;
    strcpy(hotels[4].meals[2].f_name, "Chicken Manchuria");
    hotels[4].meals[2].Price = 269;
    strcpy(hotels[4].meals[3].f_name, "Sweet Corn Soup");
    hotels[4].meals[3].Price = 119;
    strcpy(hotels[4].meals[4].f_name, "Hot and Sour Soup");
    hotels[4].meals[4].Price = 129;
    strcpy(hotels[4].meals[5].f_name, "Mutton Egg Roast");
    hotels[4].meals[5].Price = 299;
    strcpy(hotels[4].meals[6].f_name, "Egg Biryani");
    hotels[4].meals[6].Price = 229;
    strcpy(hotels[4].meals[7].f_name, "Kuska");
    hotels[4].meals[7].Price = 215;

    // Opening a file
    FILE *fp = fopen("restaurants.dat", "wb");
    if(fp == NULL) {
        printf("Sorry, there is an error opening this file.");
        return 1;
    }

    fwrite(hotels, sizeof(restaurant), 5, fp);

    // Closing the file
    fclose(fp);

    printf("Data successfully entered into restaurants.dat file.");

    return 0;
}


void create_food() {
    int num_hotels;
    printf("Enter the number of hotels to be added: ");
    scanf("%d", &num_hotels);
    clear_input_buffer(); // Clear the buffer after reading an integer

    restaurant hotel;
    FILE *fp;

    for (int i = 0; i < num_hotels; i++) {
        printf("Enter name for hotel %d: ", i + 1);
        scanf("%[^\n]s", hotel.name);
        clear_input_buffer(); // Clear the buffer after reading a string

        for (int j = 0; j < 8; j++) {
            printf("Enter name for meal %d in hotel %s: ", j + 1, hotel.name);
            scanf("%[^\n]s", hotel.meals[j].f_name);
            clear_input_buffer(); // Clear the buffer after reading a string

            printf("Enter price for meal %s: ", hotel.meals[j].f_name);
            scanf("%d", &hotel.meals[j].Price);
            clear_input_buffer(); // Clear the buffer after reading a float
        }

        fp = fopen("restaurants.dat", "ab");
        if(fp == NULL) {
            printf("Sorry, there is an error opening this file.");
            return;
        }

        fwrite(&hotel, sizeof(restaurant), 1, fp);

        // Closing the file
        fclose(fp);

        printf("Data for hotel %d successfully appended into restaurants.dat file.\n", i + 1);

        // Displaying the entered data for verification
        printf("\nHotel %d: %s\n", i + 1, hotel.name);
        for (int j = 0; j < 8; j++) {
            printf("  Meal %d: %s - Price: %.2d\n", j + 1, hotel.meals[j].f_name, hotel.meals[j].Price);
        }
    }
}
int porter_list(){
    Porter porters_list[7];

    //Storing a Sample data for the Porters:)
    strcpy(porters_list[0].name,"Rajesh");
    porters_list[0].ID=1;
    strcpy(porters_list[0].phone_number,"8144421312");
    porters_list[0].luggage_capacity=1;
    porters_list[0].availability=1;

    strcpy(porters_list[1].name, "Anil");
    porters_list[1].ID = 2;
    strcpy(porters_list[1].phone_number,"9876543210");
    porters_list[1].luggage_capacity = 3;
    porters_list[1].availability=1;


    strcpy(porters_list[2].name, "Ramesh");
    porters_list[2].ID = 3;
    strcpy(porters_list[2].phone_number ,"7000000001");
    porters_list[2].luggage_capacity = 2;
    porters_list[2].availability=1;


    strcpy(porters_list[3].name, "Vikram");
    porters_list[3].ID = 4;
    strcpy(porters_list[3].phone_number,"9001234567");
    porters_list[3].luggage_capacity = 4;
    porters_list[3].availability=1;


    strcpy(porters_list[4].name, "Sanjay");
    porters_list[4].ID = 5;
    strcpy(porters_list[4].phone_number ,"7890123456");
    porters_list[4].luggage_capacity = 3;
    porters_list[4].availability=1;

    //Opening a file:)
    FILE *fp=fopen("porter_list.dat","wb");

    if(fp==NULL){
        printf("Sorry,there is a error opening this file.");
        return 1;
    }

    fwrite(porters_list,sizeof(Porter),5,fp);

    //Closing the file
    fclose(fp);

    printf("Data succesfully entered into porter_list.dat file.");
}

// Function to create porters dynamically
void create_porter() {
    FILE *fp;
    Porter new_porter;
    int num_porters;

    // Open existing file for reading and appending
    fp = fopen("porter_list.dat", "ab+");
    if (fp == NULL) {
        printf("Error opening file porter_list.dat for appending.\n");
        return;
    }

    // Move file pointer to the end to append new data
    fseek(fp, 0, SEEK_END);

    // Prompt user for number of porters to add
    printf("Enter the number of porters you want to add: ");
    scanf("%d", &num_porters);

    // Loop to add each porter to the file
    for (int i = 0; i < num_porters; ++i) {
        printf("Enter details for porter %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", new_porter.name);
        printf("ID: ");
        scanf("%d", &new_porter.ID);
        printf("Phone Number: ");
        scanf(" %[^\n]", new_porter.phone_number);
        printf("Luggage Capacity: ");
        scanf("%d", &new_porter.luggage_capacity);
        printf("Availability (1 for available, 0 for not available): ");
        scanf("%d", &new_porter.availability);

        // Write new porter data to file
        fwrite(&new_porter, sizeof(Porter), 1, fp);
    }

    // Close the file
    fclose(fp);

    printf("New porter data successfully added to porter_list.dat file.\n");
}
void pay_store(char *username) {
    FILE *wallet;
    char filename[100];
    char extension[] = "wallet.dat";
    snprintf(filename, sizeof(filename), "%s%s", username, extension);
    
    wallet = fopen(filename, "rb+");
    if (wallet == NULL) {
        wallet = fopen(filename, "wb+");
        if (wallet == NULL) {
            perror("Error opening file");
            return;
        }
    }

    int current_balance = 0;
    fscanf(wallet, "Wallet Money : %d", &current_balance);

    int payment;
    printf("How much you wanna add? ");
    scanf("%d", &payment);

    current_balance += payment;

    // Move the file pointer to the beginning for overwriting the balance
    fseek(wallet, 0, SEEK_SET);
    fprintf(wallet, "Wallet Money : %d", current_balance);
    
    fclose(wallet);
}
