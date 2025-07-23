#ifndef BOOK_TICKET_HEADER_H
#define BOOK_TICKET_HEADER_H
#include <stdbool.h>
typedef struct{
      char name[20];
      int ID;
      char phone_number[15];
      int luggage_capacity;
      int availability;
    }Porter;

typedef struct{
    char username[50];
    char password[50];
} Admin;

typedef struct {
    char first_name[50];
    char last_name[50];
    char username[50];
    char password[50];
    char phone[20];
    char email[50];
    char security_one[50];
    char security_two[50];
    int wrong_pass_count;
    int wrong_security_count;
} User;

typedef struct {
    char f_name[25];
    int Price;
}food;

typedef struct {
    char name[25];
    food meals[8];
}restaurant;

typedef struct
{
    int pnr_num;
    int confirm_tkt;
    int wait_tkt;
    int cancel_tkt;
    char train_filename[20];
    char trn_type;
    int depart_inx;
    int dest_inx;
    int seat_type;
} pnr_stat;

typedef struct
{
    int random_num;
    int available;
} random;

typedef struct {
    int normal[7][120];
    int nr_waitlist[10]; 
    int nr_waitlist_count;

    int ac_chairs[5][60];
    int acch_waitlist[10];
    int acch_waitlist_count;

    int ac_excecutive[2][45]; 
    int acex_waitlist[10];
    int acex_waitlist_count;
} day_seat_detail;

typedef struct {
    char day_night;
    day_seat_detail stops[75]; // Pointer to dynamically allocated array
} day_file_train_detail;

typedef struct {
    int sleeper[12][72];
    int sl_waitlist[10];
    int sl_waitlist_count; 

    int ac_3tier[4][64];
    int ac3_waitlist[10]; 
    int ac3_waitlist_count;

    int ac_2tier[3][32];
    int ac2_waitlist[10];
    int ac2_waitlist_count;

    int ac_first[1][16];
    int ac1_waitlist[10];
    int ac1_waitlist_count;
} night_seat_detail;

typedef struct {
    char day_night;
    night_seat_detail stops[75]; // Pointer to dynamically allocated array
} night_file_train_detail;

typedef struct{
    int coach_no;
    int seat_num;
    char type;
} booked;

typedef struct {
    int train_no;
    char train_name[100];
    char train_stops[100][100];
    char train_day[7][10];
    float train_time[100];
    char train_type;
    char day_night;
    float dist[99];
    int no_station;

}train_struct;


typedef struct {
    int day;
    int month;
    int year;
} date_type;






typedef struct {
    int seats;
} seats;

typedef struct {
    char stops[100];
    seats seats[100];
} stops_seat;

typedef struct
{
    int pnr_no;
    int num_tkt;
    char depart[100];
    char dest[100];

} pnr_struct;

int int_yes_no(int fir,int sec);
int abc(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int choice_trainnum,int checkpoint_ind,int ind,int tot_dist,char username[]);
int show_indivi_train(train_struct trains_list[],int day,int month,int year,int selected_train[],int *selected_train_num,int depart_inx,int dest_inx,int tot_dist,char username[]);
bool isLeapYear(int year);
int getDaysInMonth(int month, int year);
bool isValidDate(int day, int month, int year);
int dayOfWeek(int d, int m, int y);
int check_day(train_struct trains_list[],int depart_train_inx,date_type date,int *checkpoint_day,int num_train,int selected_train[],int *selected_train_num);
int check_dest(train_struct trains_list[],int depart_train_inx,int depart_stop_indx,char destination_station[],date_type date,int *direct_train,int *checkpoint_day,int num_train,int selected_train[],int *selected_train_num);
void display_available_train(int train_inx,char departure_station[],char destination_station[],int selected_train[],int *selected_train_num);
int check_depart_exist(train_struct trains_list[],int num_train,char departure_station[]);
int check_dest_exist(train_struct trains_list[],int num_train,char destination_station[]);
int check_date_exist(date_type *date);
int book_ticket(train_struct trains_list[],int num_train,int selected_train[],int *selected_train_num,char username[]);
int bookticket();
int porter_main();
void clear_input_buffer();
int add_train_schedule();
int recall_fun();
int night_add_cancel_seats(char filename[],int pnr_num,int cancel_tkts,int depart_inx,int dest_inx,int seat_type,int tot_pnr);
int day_add_cancel_seats(char filename[],int pnr_num,int cancel_tkts,int depart_inx,int dest_inx,int seat_type,int tot_pnr);
int find_pnr_inx(int pnr,pnr_stat pnr_stats[],int tot_pnr);
int tkt_cancel();
void day_initialize_train(day_file_train_detail *train_file, char day_night, int no_station);
int day_seat_book(day_file_train_detail *train_file,char day_night,int depart_inx,int dest_inx,int train_inx,int tot_dist,char username[],char filename[]);
int day_fill_wait(day_file_train_detail *train_file,int depart_inx,int dest_inx,int pnr,int remaining,int comp_type);
int day_fill_empty(day_file_train_detail *train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int pnr,int comp_type);
int day_check_empty(day_file_train_detail *train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int comp_type);
int day_check_empty_count(day_file_train_detail train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int comp_type);
int  class_check_day();
char char_yes_no(char fir,char sec);
int pay_money(char *username,float a);
float payment(int n, int distance, char *seat_type, char *user);
int search_indirect(train_struct trains_list[],int num_train,char departure_station[],char destination_station[]);
int departtrain_stations(train_struct trains_list[],int num_train,char departure_station[],char destination_station[],int dept_train_inx);
int common_train(train_struct trains_list[],int num_train,char departure_station[],char destination_station[],int stat_train,int dept_train_inx,int middle);
void night_initialize_train(night_file_train_detail *train_file, char day_night, int no_station);
int night_seat_book(night_file_train_detail *train_file,char day_night,int depart_inx,int dest_inx,int train_inx,int tot_dist,char username[],char filename[]);
int night_fill_wait(night_file_train_detail *train_file,int depart_inx,int dest_inx,int pnr,int remaining,int comp_type);
int night_fill_empty(night_file_train_detail *train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int pnr,int comp_type);
int night_check_empty(night_file_train_detail *train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int comp_type);
int night_check_empty_count(night_file_train_detail train_file,int depart_inx,int dest_inx,int comp_num,int seat_num,int comp_type);
int class_check_night();
int pnr_stat_main();
int pnr_generate();
int food_order();



#endif