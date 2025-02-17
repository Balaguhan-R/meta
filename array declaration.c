#include<stdio.h>
int main(){
    int i,j;
 int marks[10];
 for (i=0;i<10;i++){
    scanf("%d",&marks[i]);
 }
 for (j=0;j<10;j++){
    printf("%d    %d",marks[j],j);
 }
 return 0;
}
