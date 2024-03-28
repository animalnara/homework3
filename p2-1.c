#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int); //float list[] //배열의 시작주소
float sum2(float *list, int); //float *list //float list[]와 같이 시작주소를 가리키는 포인터
float sum3(int n, float *list); //배열의 첫번째 요소에 대한 포인터로 위와 같다

float input[MAX_SIZE], answer;
int i;
void main(void){
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;

    /*for checking call by reference*/
    printf("------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("------------------------\n");
    printf("input \t= %p\n", input); //input의 시작 주소값 00007FF796CA7040

    answer = sum1(input, MAX_SIZE); // input 배열의 요소를 모두 더한 값
    printf("The sum is: %f\n\n", answer);


    printf("------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("------------------------\n");
    printf("input \t= %p\n", input); //input의 시작 주소값 00007FF796CA7040

    answer = sum2(input, MAX_SIZE); // input 배열의 요소를 모두 더한 값
    printf("The sum is: %f\n\n", answer);


    printf("------------------------\n");
    printf(" sum3(input, MAX_SIZE) \n");
    printf("------------------------\n");
    printf("input \t= %p\n", input); //input의 시작 주소값 00007FF796CA7040

    answer = sum3(MAX_SIZE, input); // input 배열의 요소를 모두 더한 값
    printf("The sum is: %f\n\n", answer);


    printf("[----- [강태광] [2021041098] -----]");
}


float sum1(float list[], int n) {
    printf("list \t= %p\n", list); //list의 주소값은 00007FF796CA7040
    printf("&list \t= %p\n\n, &list"); //list는 지역변수로써 해당 주소값을 불러올 수 없으므로 주소값은 0000000000000000

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}

float sum2(float *list, int n) {
    printf("list \t= %p\n", list); //list의 주소값은 00007FF796CA7040
    printf("&list \t= %p\n\n, &list"); //list는 지역변수로써 해당 주소값을 불러올 수 없으므로 주소값은 0000000000000000

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}

/* stack variable reuse test*/
float sum3(int n, float *list){
    printf("list \t= %p\n", list); //list의 주소값은 00007FF796CA7040
    printf("&list \t= %p\n\n, &list"); //list는 지역변수로써 해당 주소값을 불러올 수 없으므로 주소값은 0000000000000000

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}





   
