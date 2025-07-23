#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "book_ticket_header.h"
#include "admin_module.c"
#include "signup.c"


int admin_path(){
    printf("Entered into Admin path");
    char usernames[25];
    int way;
    do {
        printf("\n1.TRAINS HANDLING");
        printf("\n2.PORTER DETAILS");
        printf("\n3.HOTEL ADDER");
        printf("\n4.WALLET HANDLER");
        printf("\n5.INITIATE BOOKING");
        printf("\n0.STOP");

        printf("\nEnter the choice : ");
        scanf("%d", &way);

        switch (way) {
            case 1:
                trains_handle();
            break;
            case 2:
                create_porter();
            break;
            case 3:
                create_food();
            break;
            case 4:
                printf("Enter User Name:");
                scanf("%s",usernames);
                pay_store(usernames);
            break;
            case 5:
                add_train_schedule();
            break;
            }
    } while (way != 0);

}
char temp_username[20];
int user_path()
{
    printf("Entered into user path\n");
    int path;
    do {
        printf("\n1.BOOK TICKET");
        printf("\n2.CHECK STATUS");
        printf("\n3.CANCELATION");
        printf("\n0.STOP");

        printf("\nEnter the choice : ");
        scanf("%d", &path);

        switch (path) {
            case 1:
                bookticket(temp_username);
            break;
            case 2:
                pnr_stat_main();
            break;
            case 3:
                tkt_cancel();
            break;
            }
    } while (path != 0);
}


int change_password(User users[], int *numUsers,int pos)
{
    if (password_create(users,&pos))
    {
        printf("Password Changed Successfully\n");
        FILE *fp = fopen("users_data.dat", "wb");
        if (fp == NULL) {
            printf("Error opening file for writing.\n");
            return 1;
        }

        // Write the users array to the file
        fwrite(users, sizeof(User), *numUsers, fp); // Writing 2 users

        // Close the file
        fclose(fp);

    }
}


int recovery_password(User users[], int *numUsers,int pos)
{
    char temp_firstq[50],temp_secondq[50];
    if (users[pos].wrong_security_count<3)
    {
        printf("1.) Which School You Studied Last ?\nAnswer : ");
        scanf("%s",temp_firstq);
        if (strcmp(temp_firstq,users[pos].security_one)==0)
        {
            printf("2.) Who Is Your Favorite Actor ?\nAnswer : ");
            scanf("%s",temp_secondq);
            if (strcmp(temp_secondq,users[pos].security_two)==0)
            {
                users[pos].wrong_pass_count=0;
                users[pos].wrong_security_count=0;
                change_password(users,numUsers,pos);
            }
            else
            {
                printf("Entered Answer is Wrong\nNo of chances left is %d\n",2-users[pos].wrong_security_count);
                users[pos].wrong_security_count++;
                recovery_password(users,numUsers,pos);
            }
        }
        else
        {
            printf("Entered Answer is Wrong\nNo of chances left is %d\n",2-users[pos].wrong_security_count);
            users[pos].wrong_security_count++;
            recovery_password(users,numUsers,pos);
        }
    }
    else
    {
        printf("You Made More Attempts to Answer Security Question ,So Your Account is Locked.\nContact Admin\n");
        FILE *fp = fopen("users_data.dat", "wb");
        if (fp == NULL) {
            printf("Error opening file for writing.\n");
            return 1;
        }

        // Write the users array to the file
        fwrite(users, sizeof(User), *numUsers, fp);

        // Close the file
        fclose(fp);

    }

}


int check_password(User users[], int *numUsers,int pos)
{
    if (users[pos].wrong_pass_count<3)
    {
        char temp_password[20];
        printf("Enter Your Password : ");
        scanf("%s",temp_password);
        if (strcmp(temp_password,users[pos].password)==0)
        {
            printf("\nLogin Sucessfull\n");
            printf("Hello ! Mr.%s %s\n\n",users[pos].first_name,users[pos].last_name);
            users[pos].wrong_pass_count=0;
            return user_path();
        }
        else
        {
            printf("You Entered Password is Wrong, %d more chances left\n",2-users[pos].wrong_pass_count);
            users[pos].wrong_pass_count++;
            check_password(users,numUsers,pos);
        }
    }
    else
    {
        printf("Your Account is Reaches Maximum Password Entering,So change password using security questions then login\n");
        recovery_password(users,numUsers,pos);
    }

}

int check_admin_password(Admin admin_account,User users[])
{
    char temp_password[20];
    printf("Enter Your Password : ");
    scanf("%s",temp_password);

    if (strcmp(temp_password,admin_account.password)==0)
    {
        printf("Password Correct\n");
        admin_path();
    }
    else
    {
        printf("Password Incorrect.\nRe-");
        check_admin_password(admin_account,users);

    }
}




int check_username(User users[],char temp_username[], int *numUsers)
{

    for (int i=0;i<*numUsers;i++)
    {
        if (strcmp(temp_username,users[i].username)==0)
        {
            check_password(users,numUsers,i);
            return 1;
        }
    }
    return 0;
}


int check_admin_username(Admin admin_account,User users[],int *numUsers)
{
    
    printf("Enter your Username : ");
    scanf("%s",temp_username);
    if (strcmp(temp_username,admin_account.username)==0)
    {
        check_admin_password(admin_account,users);
    }
    else
    {
        check_username(users,temp_username,numUsers);
    }
}



int login_user(Admin admin_account,User users[],int *numUsers)
{
    if (check_admin_username(admin_account,users,numUsers)==0)
    {
        char check_new[1];
        printf("Username Doesn't Exist\n");
        printf("Create a new account (y/n) ? : ");
        scanf("%s",check_new);
        if (check_new[0]=='y' || check_new[0]=='Y')
        {
            printf("entered into signup module\n");
            signUp(users, numUsers);
        }
        else
        {
            return 0;
        }
    }
}


int main()
{
    Admin admin_account;
    strcpy(admin_account.username,"railadmin999");
    strcpy(admin_account.password,"Railways@$999admin");


    User users[1000];
    int numUsers;

    FILE *fp = fopen("users_data.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long len = ftell(fp);
    fclose(fp);
    numUsers=len/sizeof(User);



    fp = fopen("users_data.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(users, sizeof(User), numUsers, fp);

    fclose(fp);

    printf("Length of users_data.dat: %ld users\n", numUsers);
    int ch;
    do {
        printf("\n1.LOGIN");
        printf("\n2.SIGN-UP");
        printf("\n0.STOP");

        printf("\nEnter the choice : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                login_user(admin_account, users, &numUsers);
            break;
            case 2:
                signUp(users, &numUsers);
            break;
        }
    } while (ch != 0);
    return 0;
}
