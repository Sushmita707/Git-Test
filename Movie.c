#include<stdio.h>
struct book

{

    char name[25];

    char date[20];

    int r1,r2,r3,balcony;

}b;



//for booking tickets
void Book_Ticket(); 

 // for view now playing movie
 void View_Movie();

 //for inserting new movie
 void Add_Movie();

// for deleting now playing movie
void Delete_Movie(); 

//for deleting all transactions
void Delete_Transactions(); 



void main()

{

    system("color 30");

    int ch;

    do

    {

 printf("Welcome to Moive Ticket Booking System ");

 printf("Press [1] To Book Tickets");

 printf(" Press [2] To View Now Playing Movie");

printf("Press [3] To Add New Movie);

printf(" Press [4] To View All Transactions ");

 printf("Press [5] To Delete All Transactions ");

 printf(" Press [6] To Exit ");

      
 printf(" Please Enter Your Choice:");

        scanf("%d",&ch);

        switch (ch)

        {

            case 1 :

                Book_Ticket();

                break;



            case 2:

                View_Movie();

                break;



            case 3:

                Add_Movie();

                break;
 case 4:

                Old_Transactions();

                break;



            case 5:

                Delete_Transactions();

                break;



            case 6:

                printf("\n*** Thank You! Visit Again!!! ***\n\n");

                exit(0);



            default:

                printf("\nWrong choice!!!\nTry Again!!!");

                break;
            }
  }