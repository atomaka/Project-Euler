#include <stdio.h>

// If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


// NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

int main(void) {
	int ones[] 	= {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
	int teens[]	= {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
	int tens[] 	= {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};

	int i, onesSum = 0, teensSum= 0, tensSum= 0, hundredsSum = 0;

	for(i = 0; i < 10; i++)
		onesSum += ones[i];
	for(i = 0; i < 10; i++)
		teensSum += teens[i];
	for(i = 0; i < 10; i++)
		tensSum += tens[i];

	int length = 0;
	//		 (	ones         teens       tens      ) ten times (XX hundred)   ("hundred")  ("and")  ("thousand")
	length = ((onesSum * 9 + teensSum + tensSum * 10) * 10) + (onesSum * 100) + (7*100*9) + (3*99*9) + 11;

	printf("%d\n", length);

	return 1;
}