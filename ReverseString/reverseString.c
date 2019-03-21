#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverseStr(char* s);

int main(void) {
	char word[6] = {'h','e','l','l','o'};

	char *c = reverseStr(word);

	printf("The original string is: %s\n", word);
	printf("The reversed string is: %s\n", c);
	
	getchar();
	return 0;
}

char* reverseStr(char* s) {
	int start = 0;
	char temp;
	int end = strlen(s)-1;

	while (start < end) {
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
	return s;
}
