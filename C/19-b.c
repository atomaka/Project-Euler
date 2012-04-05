#include <stdio.h>

int main(void) {
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day = 1, firstSunday = 0;

	for(year = 1900; year <= 2000; year++) {
		for(month = 0; month < 12; month++) {
			int daysInMonth = months[month];

			if(month == 1 && year % 100 == 0) {
				if(year % 400 == 0)
					daysInMonth++;
			} else if(month == 1 && year % 4 == 0)
				daysInMonth++;

			if(day % 7 == 0 && year != 1900)
				firstSunday++;	

			day += daysInMonth;
		}
	}

	printf("%d", firstSunday);
}