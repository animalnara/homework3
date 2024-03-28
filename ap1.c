#include <stdio.h>
#include <stdlib.h>



void main(){
    int list[5]; //int형 배열 생성
    int *plist[5] = {NULL, }; //ing형 포인터배열 생성(초기화)

    plist[0] = (int *)malloc(sizeof(int)); //(int *)의 포인터로 int형 데이터로 사용 할 수 있게, malloc으로 동적할당, int형의 크기만큼 메모리를 할당

    list[0] = 1; //list 0번째에 1을 넣어줌
    list[1] = 100; //list 1번째에 100을 넣어줌

    *plist[0] = 200; //plist[0]의 주소에 200을 넣어줌


    printf("list[0]         = %d\n", list[0]); //list 0번째값이므로 list[0] = 1;값에서 변함이 없었으므로 그대로 1이 출력
    printf("&list[0]         = %p\n", &list[0]); //&list[0]의 메모리주소가 출력됩니다(00000010BA1FF890)
    printf("list[0]         = %p\n", list); //list[0]의 메모리주소가 출력됩니다.(00000010BA1FF890)
    printf("&list[0]         = %p\n", &list[0]); //"&list[0]의 메모리 주소가 출력됩니다(00000010BA1FF890)
    //메모리주소는 list[0]과 &list[0]과 첫번째 요소, 같은 것을 가리키기 때문에 같은값이 출력됩니다.



    printf("---------------------\n\n");
    printf("list[1]         = %d\n", list[1]); //list 1번째값이므로list[1] = 100; 값을 넣고 변함이 없었으므로 그대로 100이 출력
    printf("&list[1]         = %p\n", &list[1]);  //&list[1]의 메모리주소가 출력됩니다(00000010BA1FF894)
    printf("*(list+1)         = %d\n", *(list + 1)); //*(list + 1), 즉 배열의 두 번째값을 가리키고있으므로 list[1]의 값과 동일하게 가리키며 100을 출력합니다.
    printf("list+1         = %p\n", list+1); //list+1의 주소값, 00000010BA1FF894이 출력됩니다.
    



    printf("---------------------\n\n");
    printf("*plist[0]         = %d\n", *plist[0]); //*plist[0] = 200; 그대로 200이 출력됩니다.
    printf("&plist[0]         = %p\n", &plist[0]); //plist[0]의 주소값 00000010BA1FF860이 출력됩니다.
    printf("&plist         = %p\n", &plist); //&plist의 주소값 00000010BA1FF860이 출력됩니다.
    printf("plist         = %p\n", plist); //plist의 주소값 00000010BA1FF860이 출력됩니다.
    //메모리주소는 plist의[0]과 &plist의[0]과 첫번째 요소, 같은 것을 가리키기 때문에 같은값이 출력됩니다.

    printf("plist[0]         = %p\n", plist[0]); //plist[0]은 00000177112B5660이며 배열의 첫번째 주소를 나타냅니다.
    printf("plist[1]         = %p\n", plist[1]); // int *plist[5] = {NULL, }; 처음에 plist[0] = (int *)malloc(sizeof(int));만 했으므로 0000000000000000
    printf("plist[2]         = %p\n", plist[2]); //위와 같은 이유로 0000000000000000
    printf("plist[3]         = %p\n", plist[3]); //위와 같은 이유로 0000000000000000
    printf("plist[4]         = %p\n", plist[4]); //위와 같은 이유로 0000000000000000

    printf("[----- [강태광] [2021041098] -----]");

    free(plist[0]); //메모리 블록 해제
}