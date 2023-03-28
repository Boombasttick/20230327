#include <stdio.h>
int main()
{
    // char* arr[5];
    // char* (*pa)[5]=&arr;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *pc = arr;
    int (*p)[10] = &arr;
    printf("%d\n",*arr);
    printf("%d",*(*p));
    return 0;
}


//int* p=arr;
//p[i]  ->  arr[i]  ->  *(p+i)  ->  *(arr+i)