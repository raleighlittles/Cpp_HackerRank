#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
void update(int *a,int *b) {
    // Complete this function
    int new_a, new_b;
    new_a = *a + *b;
    new_b = abs(*a - *b);
    *a = new_a;
    *b = new_b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
