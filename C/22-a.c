#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

// For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 * 53 = 49714.

// What is the total of all the name scores in the file?

int nameScore(char name[50]);

int main(void) {
	char c;
	char names[5163][50];
	int i, name = 0, character = 0, inQuotes = 0;
	long long totalScore = 0;

	while((c = getchar()) != EOF) {
		if(c == '"') {
			if(inQuotes == 0) {
				inQuotes = 1;
			} else {
				inQuotes = 0;
				names[name][character] = '\0';
				name++;
				character = 0;
			}
		} else if(c != ',') {
			names[name][character] = c;
			character++;
		}
	}
	
	qsort(names, 5163, 50, (int(*)(const void*, const void*))strcmp);

	for(i = 0; i < name; i++) {
		int scoredName = nameScore(names[i]);
		int currentScore = (i + 1) * scoredName;
		totalScore += currentScore;
	}

	printf("%lld", totalScore);

	return 1;
}

int nameScore(char name[50]) {
	char alphabet[27] = "_ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j, nameScore = 0;

	for(i = 0; name[i] != '\0'; i++) {
		for(j = 1; j < 27; j++) {
			if(name[i] == alphabet[j]) {
				nameScore += j;
				break;
			}
		}
	}

	return nameScore;
}