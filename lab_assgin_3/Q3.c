#include <stdio.h>

int main(void) {
    // a. Get the case inventory for each brand for the start of the week.
    int id1, id2, id3, id4;
    printf("Enter the starting inventory of Piels (ID number 1), Coors (ID number 2), Bud (ID number 3), and Iron City (ID number 4):\n");
    scanf("%d %d %d %d", &id1, &id2, &id3, &id4);

    // Initialize the sum (final inventory) with starting values.
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;



    // b. Process all weekly sales and purchase records for each brand.
    while (input!=5) {

        printf("\nEnter the brand ID\n");
        printf("1 for Piels\n");
        printf("2 for Coors\n");
        printf("3 for Bud\n");
        printf("4 for Iron City\n");
        printf("5 to exit\n");
        scanf("%d", &input);

        int purchase = 0, sales = 0;

        switch (input) {
            case 1:
                printf("Enter the purchase amount for Piels: ");
                scanf("%d", &purchase);
                printf("Enter the sales amount for Piels (use negative sign): ");
                scanf("%d", &sales);
                sum1 = sum1 + purchase + sales;
                break;
            case 2:
                printf("Enter the purchase amount for Coors: ");
                scanf("%d", &purchase);
                printf("Enter the sales amount for Coors (use negative sign): ");
                scanf("%d", &sales);
                sum2 = sum2 + purchase + sales;
                break;
            case 3:
                printf("Enter the purchase amount for Bud: ");
                scanf("%d", &purchase);
                printf("Enter the sales amount for Bud (use negative sign): ");
                scanf("%d", &sales);
                sum3 = sum3 + purchase + sales;
                break;
            case 4:
                printf("Enter the purchase amount for Iron City: ");
                scanf("%d", &purchase);
                printf("Enter the sales amount for Iron City (use negative sign): ");
                scanf("%d", &sales);
                sum4 = sum4 + purchase + sales;
                break;
            default:
                printf("Invalid ID. Please enter a valid brand ID.\n");
                break;
        }
    }

    // c. Display the final inventory for each brand.
    printf("\nFinal inventory:\n");
    printf("Piels: %d cases\n", (sum1+id1));
    printf("Coors: %d cases\n", (sum2+id2));
    printf("Bud: %d cases\n", (sum3+id3));
    printf("Iron City: %d cases\n", (sum4+id4));

    return 0;
}
