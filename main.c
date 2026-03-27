
#include <stdio.h>
#include <unistd.h>

int main()
{
    int age,type,tickets,seat,movie;
    float price=0,total;
    char name[50];
    
  
    
    printf("\n\n===========MOVIE TICKET BOOKING SYSTEM==========\n\n");
    
    
    
    printf(" Please Enter your name :\n");
    scanf("%s",name);
    sleep(1);
    
    printf("Enter your age:\n");
    scanf("%d",&age);
    sleep(1);
    
    printf("=====SANKRATHI MOVIE RELEASES=====\n\n");
    sleep(1);
    printf("1.Anaganaga oka raju\n\n");
    sleep(1);
    printf("2.Raja saab\n\n");
    sleep(1);
    printf("3.Bharta mahashayaku vignapthi\n\n");
    sleep(1);
    printf("4.Mana shankara vara prasad gaaru\n\n");
    sleep(1);
    printf("5.Naari naari naduma murari\n\n");
    sleep(1);
    
    printf("\nEnter your movie choice:");
    scanf("%d",&movie);

    
    printf("\nMovie Types\n(1.2D,2.3D)\n");
    scanf("%d",&type);
    sleep(1);
    
    printf("\n Seat Types\n\n(1-REGULAR,2-RECLINER)\n");
    printf("Enter Seat Type: ");
    scanf("%d",&seat);
    sleep(2);
    
    printf("\nHow many tickets would you like to buy: \n");
    scanf("%d",&tickets);
    sleep(1);
    
    if(seat==1)
        price=150;
    else if(seat==2)
        price=300;
    else
        printf("invalid ");
    
    total=tickets*price;
    
    if (age<=10)
    {    printf("50%% DISCOUNT APPLIED");
        total=total*0.5;
    }
    else if(age>=60)
    {    printf("30%% DISCOUNT APPLIED");
        total=total*0.7;
    }
    else
        printf("NO DISCOUNT\n");
    
    
    printf("\n**********************************************\n");
    printf("*                                            *\n");
    printf("*                 ART CINEMAS                *\n");
    printf("*                                            *\n");
    printf("**********************************************\n");
    sleep(1);
    
    printf("CUSTOMER NAME                         :%s\n",name);
    
    sleep(1);
    
    printf("MOVIE                                 :");
    
    if (movie==1)
        printf("Anaganaga oka Raju\n");
    else if (movie==2)
        printf("Raja saab\n");
    else if (movie==3)
        printf("Bharta mahashayaku vignapthi\n");
    else if (movie==4)
        printf("Mana shankara vara prasad gaaru\n");
    else if (movie==5)
        printf("naari naari naduma murari\n");
     sleep(1);   
    printf("MOVIE TYPE                            :");
    
    if (type==1)
        printf("2D\n");
    else
        printf("3D\n");
        
    printf("SEAT TYPE                             :");
    
    if (seat==1)
        printf("regular\n");
    else
        printf("recliner\n");
        
    sleep(1);
    
    printf("NUMBER OF TICKETS                     :%d\n",tickets);
    sleep(2);
    printf("----------------------------------------------------\n");
    printf("TOTAL AMOUNT                          : %.2f\n",total);
    printf("-----------------------------------------------------\n");
    sleep(1);
    
    printf("                #### ENJOY YOUR MOVIE ####           ");
    return 0;
}
