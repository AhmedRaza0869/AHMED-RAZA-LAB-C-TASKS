#include<stdio.h> 

int main() {
    int choice;
    printf("\aWelcome to the restaurant!!!!\n");
    printf("We have three sections:\n1: Burger hub\n2: Ice cream parlour\n3: Coffee shop\n");
    printf("\nEnter number from 1-3 for your desired section:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nYour order will be handled by Burger hub section\n");
       } 
    else if (choice == 2) {
        printf("\nYour order will be handled by Ice cream parlour section\n");
    } 
    else if (choice == 3) {
        printf("You chose Coffee shop\n");
        char size;
        int num;
        int bill = 0;

        printf("Which size you want to order:\nS for small (150 Rs)\nM for medium (200 Rs)\nL for large (250 Rs)\n");
        scanf(" %c", &size);
        printf("How many coffees do you want:\n");
        scanf("%d", &num);

        // Combo offers
        if (num > 1) {
            int numd;
            printf("Check out our combo offers!!:\n");
            printf("1. 2 small coffees for 1099 Rs\n");
            printf("2. 1 large coffee + 1 small coffee for 1499 Rs\n");
            printf("3. 2 medium coffees + 1 small coffee for 1899 Rs\n");
            printf("Do you want a combo offer? Enter 1-3 (0 for none): ");
            scanf("%d", &numd);

            if (numd == 1) { bill = 1099; }
            else if (numd == 2) { bill = 1499; }
            else if (numd == 3) { bill = 1899; }
            else {
        
                int price = 0;
                if(size == 'S' || size == 's') price = 150;
                else if(size == 'M' || size == 'm') price = 200;
                else if(size == 'L' || size == 'l') price = 250;
                else printf("Invalid size!\n");
                bill = price * num;
            }
        } else {
		         int price = 0;
            if(size == 'S' || size == 's') price = 150;
            else if(size == 'M' || size == 'm') price = 200;
            else if(size == 'L' || size == 'l') price = 250;
            else printf("Invalid size!\n");
            bill = price * num;
        }
        int type;
        printf("Coffee type:\n1. Latte\n2. Cappuccino\n3. Regular\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &type);
        if (type == 1) printf("You selected Latte.\n");
        else if (type == 2) printf("You selected Cappuccino.\n");
        else if (type == 3) printf("You selected Regular.\n");
        else printf("Invalid coffee type selected.\n");

        printf("Your final bill is: %d Rs\n", bill);
    } 
    else {
        printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}
