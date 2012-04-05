#include <stdio.h>

// You are given the following information, but you may prefer to do some research for yourself.

// 1 Jan 1900 was a Monday.
// Thirty days has September,
// April, June and November.
// All the rest have thirty-one,
// Saving February alone,
// Which has twenty-eight, rain or shine.
// And on leap years, twenty-nine.
// A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
// How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

int main(void) {
	int year = 1900, month = 1, day = 1, firstSunday = 0;

	for(; year <= 2000; year++) {
		printf("%d: ", year);
		for(month = 1; month <= 12; month++) {
			int daysInMonth;
			if(month == 4 || month == 6 || month == 9 || month == 11) {
				daysInMonth = 30;
			} else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				daysInMonth = 31;
			} else if(year % 100 == 0) {
				if(year % 400 == 0) {
					daysInMonth = 29;
				} else {
					daysInMonth = 28;
				}
			} else if(year % 4 == 0) {
				daysInMonth = 29;
			} else {
				daysInMonth = 28;
			}
		
			if(day % 7 == 0) {
				printf("X");
				if(year != 1900)
					firstSunday++;
			} else {
				printf("O");
			}

			day += daysInMonth;
		}
		printf("\t%d\n", firstSunday);
	}

	printf("%d\n", firstSunday);

	return 1;
}