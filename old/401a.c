#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, x, i, m, pos, neg;
	while (scanf("%d %d", &n, &x) != EOF) {
		pos = 0; 
		neg = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &m);
			if (m >= 0) {
				pos += m;
			} else {
				neg += m;
			}
		}
		// printf("%d %d\n", pos, neg);
		if (((pos + neg) % x) == 0) {
			printf("%d\n", abs(pos + neg) / x);
		} else {
			printf("%d\n", abs(pos + neg) / x + 1);
		}
	}
}
