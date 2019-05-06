#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void linear_search(int *arr,int num);
int i,j;

int main()
{

   int arr[27]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,999};
    linear_search(arr,66);
    return 0;
}
void linear_search(int arr[],int num){
for( i=0;i<27;i++){
        j++;
if(arr[i]==num){
printf("number is found :%d     index is : %d",num,i);
printf("number of tries is:%d",j );
}

}


}





