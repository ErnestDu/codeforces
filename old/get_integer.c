#include <stdio.h>
#include <math.h>
int get_integer(int x, int pos, int len);
int pow_i(int base, int x) {
	int ss = 1;
	int i;
	if (x == 0) 
		return 1;
	for (i = 1; i <= x; i++) {
		ss = ss * base;
	}
	return ss;
}

int main()
{
	int x, i;
	scanf("%d", &x);
	// integer length
	int len = 0;
	for (i = 0; x / (int)pow_i(10, i) != 0; i++) {
		len++;
	}
	printf("%d\n", len);
	int pos;
	scanf("%d", &pos);
	printf("%d\n", get_integer(x, pos, len));

}

int get_integer(int x, int pos, int len) {
	return (int)(x % (int)pow(10, (len - pos + 1))) / (int)pow(10, (len - pos));
	//printf("%d %d %d\n", x, pos, len);
	//printf("%d\n", len-pos+1);
}
