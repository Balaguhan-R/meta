#include<stdio.h>

void choice() {
    printf("1. Display Menu\n");
    printf("2. Take Order\n");
    printf("3. Calculate Bill\n");
    printf("4. Exit\n");
}
int main() {
    printf("\t\t\t\t\t----FRIENDS RESTAURANT----\n\n");
    int i, a, b, c, price, found1 = 0, found2 = 0, found3 = 0, found4 = 0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0;

    while(1) {
        choice();
        printf("\nEnter your choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("\n\nMenu:\n");
            printf("\n1. Burger - $100 \n");
            printf("2. Pizza  - $200 \n");
            printf("3. Pasta  - $300 \n");
            printf("4. Briyani  - $400 \n\n");
        }
        else if(a == 2) {
                printf("\nEnter the number of items you want to order :");
                scanf("%d",&c);
            for(i=1;i<=c;i++){
            printf("\nEnter Dish Number(1-4): ");
            scanf("%d", &b);
            switch(b) {
                case 1:
                    printf("\nYou Selected Burger and The Price is 100\n");
                    price = 100;
                    printf("\nHow Many did you want: ");
                    scanf("%d", &quantity1);
                    found1 = price * quantity1;
                    break;
                case 2:
                    printf("\nYou Selected Pizza and The Price is 200\n");
                    price = 200;
                    printf("\nHow Many did you want: ");
                    scanf("%d", &quantity2);
                    found2 = price * quantity2;
                    break;
                case 3:
                    printf("\nYou Selected Pasta and The Price is 300\n");
                    price = 300;
                    printf("\nHow Many did you want: ");
                    scanf("%d", &quantity3);
                    found3 = price * quantity3;
                    break;
                case 4:
                    printf("\nYou Selected Briyani and The Price is 400\n");
                    price = 400;
                    printf("\nHow Many did you want: ");
                    scanf("%d", &quantity4);
                    found4 = price * quantity4;
                    break;
                default:
                    printf("\nInvalid Dish Number!\n");
            }
        }
    }
        else if(a == 3) {
                printf("\n-----Bill Summary-----\n");
                if (found1 > 0) printf("Burger: Quantity - %d x 100 = %d\n", quantity1, found1);
                if (found2 > 0) printf("Pizza: Quantity - %d x 200 = %d\n", quantity2, found2);
                if (found3 > 0) printf("Pasta: Quantity - %d x 300 = %d\n", quantity3, found3);
                if (found4 > 0) printf("Briyani: Quantity - %d x 400 = %d\n", quantity4, found4);

            int totalBill = found1 + found2 + found3 + found4;
            printf("\nTotal Bill: %d\n\n", totalBill);
        }
        else if(a == 4) {

            printf("\n\n\t\tTHANK YOU! VISIT AGAIN.\n");
            break;
        }
        else {

            printf("Invalid! Please Check Your Choice.\n");
        }
    }

    return 0;
}
