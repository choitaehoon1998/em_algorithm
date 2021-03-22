//hello.c
#include<stdio.h>

void main()
{
    int n = 2004;
    printf("%d \n",n);
    // 포인터 선언 방법 *p(변수명)
    int *p = &n; 
    // 값 연산자 * : 포인터변수가 가리키는 주소에 저장되어있는 값을 읽어옴 
    // 주소 연산자 & : 변수가 차지하는 메모리 영역의 주소를 읽어옴
    printf("%d \n",*p);
    printf("%d \n", p);
    p = malloc(sizeof(int));
    printf("%d \n", p);
}
