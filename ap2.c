#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));

    printf("list[0] \t = %d\n", list[0]); //처음 대입한 list[0] = 10;, 즉 10이 출력됨
    printf("list \t\t = %p\n", list); //list의 시작 주소값 0000009AD83FFB30이 출력됨
    printf("&list[0] \t = %p\n", &list[0]); //&list[0]의 주소값(첫 번째) 0000009AD83FFB30이 출력됨
    printf("list + 0 \t = %p\n", list+0); //list의 0번째, 즉 첫번째 주소값 0000009AD83FFB30이 출력됨
    printf("list + 1 \t = %p\n", list+1); //주소값은 0000009AD83FFB30에 +1했으므로 0000009AD83FFB34
    printf("list + 2 \t = %p\n", list+2); //주소값은 0000009AD83FFB34에 +1이 됐으므로 0000009AD83FFB38
    printf("list + 3 \t = %p\n", list+3); //주소값은 0000009AD83FFB34에 +1이 됐으므로 0000009AD83FFB3C
    printf("list + 4 \t = %p\n", list+4); //주소값은 0000009AD83FFB3C에 +1을 더했으므로 0000009AD83FFB40
    printf("&list[4] \t= %p\n", &list[4]); //이 값은 list[4], 즉 배열 4번째값을 가리키고 있으므로 0000009AD83FFB40

    free(plist[0]); //메모리블록 해제

    printf("[----- [강태광] [2021041098] -----]");
}