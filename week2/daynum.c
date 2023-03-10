#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
	int dd, mm, yyyy;
	int length_of_feb, daynum, month;
	printf("Enter date in dd/mm/yyyy format: ");
	if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
		printf("Invalid input\n");
		exit(EXIT_FAILURE);
	}
	length_of_feb = 28 + (yyyy%4==0 &&
				(yyyy%100!=0 || yyyy%400==0));
	daynum = dd;
	for (month=1; month<mm; month++) {
		if (month==2) {
			daynum += length_of_feb;
		} else if (month==4 || month==6 || 
				   month==9 || month==11) {
			daynum += 30;
		} else {
			daynum += 31;
		}
	}
	printf("%02d/%02d/%04d is day number %d in the year\n",
		dd, mm, yyyy, daynum);
	return 0;
}