#include <stdio.h>

int sum(int, int);
<<<<<<< HEAD
int sub(int x, int y){
	return x-y;
}
=======
int sub(int, int);
<<<<<<< HEAD
int mul(int, int);
int div(int x, int y){
	if(y != 0){
		return x/y;
}

=======
>>>>>>> 7befba36802730153325ad1f100c9d37391e9f0b
int mul(int x, int y){
	return x*y;
}
int div(int, int);
>>>>>>> af851a963ac02bf7c2bb6eeb8cb23264a9e08993

int main() {
    printf("4 + 2 = %d\n", sum(4, 2));
    printf("4 - 2 = %d\n", sub(4, 2));
    printf("4 * 2 = %d\n", mul(4, 2));
    printf("4 / 2 = %d\n", div(4, 2));
    return 0;
}
