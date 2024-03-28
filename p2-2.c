#include <stdio.h>

void print_one(int *ptr, int rows);

int main(){
    int one[] = {0, 1, 2, 3, 4};

    printf("one     = %p\n", one); //one의 주소값 0000002A6DDFF690
    printf("&one     = %p\n", &one); //one의 주소값 0000002A6DDFF690
    printf("&one[0]     = %p\n", &one[0]); //one의 주소값 0000002A6DDFF690
    //위 3개의 주소는 one의 배열의 첫 번째 요소를 가리키므로 주소값이 같다
    printf("\n");


    printf("--------------------\n");
    printf("  print_one(&one[0], 5) \n"); //one과 메모리주소가 같은 이유는  one의 배열의 첫 번째 요소를 가리키므로 주소값이 같습니다
    printf("--------------------\n");
    print_one(&one[0], 5); //void print_one(int *ptr, int rows){ 부분을 호출


    printf("--------------------\n");
    printf("  print_one(one, 5) \n"); //&one[0]과  메모리주소가 같은 이유는  one의 배열의 첫 번째 요소를 가리키므로 주소값이 같습니다
    printf("--------------------\n");
    print_one(one, 5); //void print_one(int *ptr, int rows){ 부분을 호출

    printf("[----- [강태광] [2021041098] -----]");

    return 0;
}

void print_one(int *ptr, int rows){ //int *ptr은 one[0], int rows는 one의 배열의 길이인 5가됩니다. 
    /*print out a one-dimensional array using a pointer*/

    int i;
    printf("Address \t Contents \n");
    for(i=0; i < rows; i++)
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}