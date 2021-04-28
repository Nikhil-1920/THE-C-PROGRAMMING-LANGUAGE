// Print input line
#include <stdio.h>
#define MAXLINE 1000

int myGetline(char s[], int lim) {
	int c, i = 0;

	while((c = getchar()) != EOF && c != '\n') {
		if(i < lim - 1)
			s[i++] = c;
		else
			i++;
	}

	if(c == '\n' && i < lim - 1) {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int main(void) {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = myGetline(line, MAXLINE)) > 0)
		printf("%d : %s", len, line);
	
	return 0;
}


