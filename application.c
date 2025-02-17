#include<stdio.h>
int main()
 {
   //MENU PRINTING

    printf("\t\t\t\t\t----FRIENDS RESTAURANT----\n\n");
            printf("\nMenu:\n\nDISH     DISH             PRICE\nCODE");
            printf("\n1.   Bun Praota            - 25 \n");
            printf("2.   Chicken gravy         - 149 \n");
            printf("3.   Mutton chukka         - 299 \n");
            printf("4.   karidosa              - 249 \n");
            printf("5.   Idly                  - 19 \n");
            printf("6.   Chicken pallipalayam  - 149 \n");
            printf("7.   Nann(2 piece)         - 24 \n");
            printf("8.   Icecream (per scoop)  - 49 \n\n");

    int i, a, b, c, price, found1 = 0, found2 = 0, found3 = 0, found4 = 0;
    int found5 = 0,found6 = 0,found7 = 0,found8 = 0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0;
    int quantity5 = 0, quantity6 = 0, quantity7 = 0, quantity8 = 0;

    // ORDERING SYSTEM

printf("Enter 0 once you completed your order!\n");

            while(1){
                    printf("enter the dish code:");
                    scanf("%d",&b);
            if(b!=0){
            switch(b) {
                case 1:
                    printf("\nBun parota");
                    price = 25;
                    printf("  Quantity");
                    scanf("%d", &quantity1);
                    found1 = price * quantity1;
                    break;
                case 2:
                    printf("\nChicken gravy");
                    price = 149;
                    printf("  Quantity");
                    scanf("%d", &quantity2);
                    found2 = price * quantity2;
                    break;
                case 3:
                    printf("\nMutton chukka");
                    price = 299;
                    printf("  Quantity");
                    scanf("%d", &quantity3);
                    found3 = price * quantity3;
                    break;
                case 4:
                    printf("\nKari dosa");
                    price = 249;
                    printf("  Quantity");
                    scanf("%d", &quantity4);
                    found4 = price * quantity4;
                    break;
                        case 5:
                    printf("\nIdly");
                    price = 19;
                    printf("  Quantity");
                    scanf("%d", &quantity5);
                    found5 = price * quantity5;
                    break;
                        case 6:
                    printf("\nChicken pallipalayam");
                    price = 149;
                    printf("  Quantity");
                    scanf("%d", &quantity6);
                    found6 = price * quantity6;
                    break;
                        case 7:
                    printf("\nNann x 2");
                    price = 24;
                    printf("  Quantity");
                    scanf("%d", &quantity7);
                    found7 = price * quantity7;
                    break;
                        case 8:
                    printf("\nIce cream");
                    price = 49;
                    printf("   Quantity");
                    scanf("%d", &quantity8);
                    found8 = price * quantity8;
                    break;
                default:
                    printf("\nEnter a valid code!\n");
            }}
           else if(b==0){
            break;
           }
            else{
                printf("\nEnter a valid code!");
            }

        }

        //BILLING SYSTEM

                printf("\n\n\n\t\t\t\t-----Bill Summary-----\n");
                if (found1 > 0) printf(" Bun parota - %d x 49 = %d\n", quantity1, found1);
                if (found2 > 0) printf(" Chicken gravy - %d x 149 = %d\n", quantity2, found2);
                if (found3 > 0) printf(" Mutton chukka - %d x 299 = %d\n", quantity3, found3);
                if (found4 > 0) printf(" Kari dosa - %d x 249 = %d\n", quantity4, found4);
                if (found5 > 0) printf(" Idly - %d x 19 = %d\n", quantity5, found5);
                if (found6 > 0) printf(" Chicken pallipalayam- %d x 149 = %d\n", quantity6, found6);
                if (found7 > 0) printf(" Nann - %d x 24 = %d\n", quantity7, found7);
                if (found8 > 0) printf(" Icecream - %d x 49 = %d\n", quantity8, found8);

            int totalBill = found1 + found2 + found3 + found4+found5 + found6 + found7 + found8;
            printf("\n\t\tTotal Bill: %d\n\n", totalBill);
    }



