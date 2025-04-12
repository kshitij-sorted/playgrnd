




NAME - Kshitij Wadhekar
CLASS - CS(AIML)-F
BATCH - 3













#include <stdio.h>
int main(){

    int ar[10] = {1,2,3,6,9,5,7,8,4,0};
    int sum = ar[0];
    int max = ar[0];
    int min = max;
    int s;
    for (int i = 0; i < 10; i++){
        printf("%d\n", ar[i]);
        sum = sum + ar[i];
        if (ar[i] > max){
            max = ar[i];
        }
        else{
            max = max;
        }
        if(ar[i]<min){
            min = ar[i];
        }
        else{
            min = min;
        }
    }
    printf("%d  %d %d\n print the number you want to search ",sum,max,min);

    scanf("%d",&s);

    for (int i =0;i<10;i++){
        if(s == ar[i]){
            printf("the number is at index %d\n",i);
        }
    }

    for(int i=0;i<10;i++){
        if (ar[i-1]>ar[i]){
            int p = ar[i-1];
            ar[i-1] = ar[i];
            ar[i] = p;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d\n", ar[i]);
    }

    char str[100],str2[100];
    int i, len1;

    len1 = 0;
    printf("Enter string 1: \n");
    scanf("%s",str);
    for(int i = 0;str[i] != '\0';i++){
        len1++;
    }
    printf("length of the string is %d\n",len1);
    for(int i =0;i <= len1;i++){
        printf("%c",str[(len1-1)-i]);
}

int len2;

len2 = 0;
printf("\nEnter string 2: \n");
scanf("%s",str2);
for(int i = 0;str2[i] != '\0';i++){
    len2++;
}
printf("length of the string is %d\n",len2);
for(int i =0;i <= len2;i++){
    printf("%c",str2[(len2-1)-i]);
}

if (len1 == len2) {

    printf("\nString is equal in len");
    for(int i=0;i<len1;i++){
        if(str[i]==str2[i]){
            printf("\n%d index is Exactly same",i);
        }
        else{
            printf("\nOnly length same");
        }
    }

}

int mat1[2][2] = {{1,1},{2,2}};
int mat2[2][2] = {{1,0},{4,1}};
int sumo[2][2];
int tran[2][2];

  for (int i = 0; i < 2; ++i) 
    for (int j = 0; j < 2; ++j) { 
      sumo[i][j] = mat1[i][j] + mat2[i][j]; 
    } 
 
  printf("\nSum of the two matrices: \n"); 
  for (int i = 0; i < 2; ++i) 
    for (int j = 0; j < 2; ++j) { 
      printf("%d   ", sumo[i][j]); 
      if (j == 2 - 1) { 
        printf("\n\n"); 
      } 
    }

  for (int i = 0; i < 2; ++i)
  for (int j = 0; j < 2; ++j) {
    tran[j][i] = mat1[i][j];
  }

printf("\nTranspose of the matrix:\n");
  
    for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j) {
    printf("%d  ", tran[i][j]);
    if (j == 2 - 1)
    printf("\n");
  }
printf("\n");
    return 0;
}