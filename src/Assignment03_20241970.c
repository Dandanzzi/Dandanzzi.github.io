#include <stdio.h>

int f(int n) {
    int sum = 0; 
    for (int k = 1; k <= n; k++) { //k�� 1���� n���� ������Ű�� �ݺ�
        sum += k * k; //sum�� k������ ����.
    }
    return sum;
}

int main() {
    int n;
    printf("���� ���� �ϳ��� �Է��ϼ��� :  "); 
    scanf_s("%d", &n); //����ڷκ��� ���� �Է�
    printf("%d\n", n);
    printf("%d\n", f(n)); //�Լ� f�� ȣ���� n������ ���� ���� ����ϰ� ���
    return 0;
}