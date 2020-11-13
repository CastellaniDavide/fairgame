/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <stdio.h>
#include <assert.h>

// input data
int N, K, M, P, Q;

int main() {
//  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    assert(5 == scanf("%d%d%d%d%d", &N, &K, &M, &P, &Q));

    int max_no_penality = K / 2;
    max_no_penality *= 2;

    N = N % (max_no_penality * 2);

    if (N % 2 == 0)
    {
        printf("%d\n", P - Q);
    }
    else
    {
        printf("%d\n", (P - Q) - M);
    }

    return 0;
}
