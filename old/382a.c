#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];
	while (scanf("%s", &str1) != EOF) {
		scanf("%s", &str2);
		int len1, len2;
		len1 = strlen(str1);
		len2 = strlen(str2);
		if ((len1 + len2) % 2 == 0) {
			printf("Impossible\n");
		} else {
			int i, left = 0;
			for (i = 0; str1[i] != '|'; i++) {
				left++;
			}
			//printf("left %d\n", left);
			int len;
			len = (len1 + len2 - 1) / 2;
			if (left > len) {
				printf("Impossible\n");
			}
			else if (left < len){ 
				for (i = 0; i < (len - left); i++) {
					printf("%c", str2[i]);
				}
				printf("%s", str1);
				for (; str2[i] != '\0'; i++) {
					printf("%c", str2[i]);
				}
				printf("\n");
			} else { // left == len
				printf("%s%s\n", str1, str2);
			}
		}
	}
}

