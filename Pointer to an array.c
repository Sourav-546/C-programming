#include<stdio.h>
#include<conio.h>
void main(){
  int arr[10]={10,20,30,40,50,70,80,90,100};
  int i;
  int *ptr;
  ptr=arr;
  for(i=0;i<10;i++){
    printf("value of arr[%d]:%d\n",i,*ptr);
    ptr++;
}
  
getch();
}
