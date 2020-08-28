#include<stdio.h>
void display(int array1[3][3]);
void rotate(int array1[3][3]);
int main(){
        int array1[3][3],i,j;
        printf("enter array elements\n");
        for(i=0;i<3;i++){
              for(j=0;j<3;j++){
                       scanf("%d",&array1[i][j]);
              }
        }
        display(array1);
        rotate(array1);
        return 0;
}
void display(int array1[3][3]){
         int i,j;
         for(i=0;i<3;i++){
              for(j=0;j<3;j++){
                       printf("|%d|",array1[i][j]);
              }
              printf("\n");
        }
        printf("\n");
}
void rotate(int array1[3][3]){
                      int i,j;
                      int y=2,p=3;
                      for(i=0;i<1;i++){
                                for(j=0;j<2;j++){
                                      int temp=array1[i][j]; 
                                      array1[i][j]=array1[p-1-j][i]; 
                                      array1[p-1-j][i]=array1[p-1-i][p-1-j]; 
          		               array1[p-1-i][p-1-j]=array1[j][p-1-i]; 
                                      array1[j][p-1-i]=temp; 
                                }
                      }
                      display(array1);
}
