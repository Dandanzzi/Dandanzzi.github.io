#include <stdio.h>

int f(int n) {
    int sum = 0; 
    for (int k = 1; k <= n; k++) { //k를 1부터 n까지 증가시키며 반복
        sum += k * k; //sum에 k제곱을 더함.
    }
    return sum;
}

int main() {
    int n;
    printf("양의 정수 하나를 입력하세오 :  "); 
    scanf_s("%d", &n); //사용자로부터 정수 입력
    printf("%d\n", n);
    printf("%d\n", f(n)); //함수 f를 호출해 n까지의 제곱 합을 계산하고 출력
    return 0;
}