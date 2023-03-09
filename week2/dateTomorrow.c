#include <stdio.h>

int main(void) {
    int dd, mm, yyyy, length_of_month;
    printf("Enter a date in dd/mm/yyyy format: ");
    scanf("%02d/%02d/%04d", &dd, &mm, &yyyy);
    printf("The date today is: %02d/%02d/%04d\n", dd, mm, yyyy);

    switch (mm) {
        case 2: 
            length_of_month = 28 + (yyyy%4==0 && (yyyy%100!=0 || yyyy%400==0));
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            length_of_month = 30;
            break;
        default:
            length_of_month = 31;
            break;
    }
    // printf("%d\n", length_of_month);

    if (mm == 12 && dd == 31) {
        dd = 1, mm = 1, yyyy++;
    } else if (mm == 2 && dd == length_of_month) {
        dd = 1, mm = 3;
    } else if (dd == length_of_month) {
        dd = 1, mm++;
    } else {
        dd++;
    }

    printf("The date tomorrow is: %02d/%02d/%04d\n", dd, mm, yyyy);
}