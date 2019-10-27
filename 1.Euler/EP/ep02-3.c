/*************************************************************************
	> File Name: ep02-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年05月19日 星期日 18时27分14秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 44
#define MAX_M 4000000
int fib[MAX_N + 5];

int main() {
    long long sum = 0;
    int f[3] = {0, 1};
    int n = 1;
    while (f[n % 3] + f[(n - 1) % 3] < MAX_M) {
        n += 1;
        f[n % 3] = f[(n - 1) % 3] + f[(n - 2) % 3];
        if (!(f[n % 3] & 1)) sum += f[n % 3];
    }
    printf("%lld\n", sum);
    return 0;
}
