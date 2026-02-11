#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    if (n > 2)
        maxPrime = n;

    printf("%lld", maxPrime);

    return 0;
}



# problem 2:  Print Odd Numbers Except Multiples of 3 (Using continue)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            continue;

        if (i % 3 == 0)
            continue;

        printf("%d ", i);
    }

    return 0;
}



# problem 3:  Distance Formula
#include <stdio.h>

int main() {
    float u, t, a;
    scanf("%f %f %f", &u, &t, &a);

    float distance = u * t + 0.5 * a * t * t;

    printf("%.2f", distance);

    return 0;
}


#4 #voteing algorithim using ternary operator.

#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    (age >= 18) ? printf("Eligible for voting") : printf("Not eligible for voting");

    return 0;
}

