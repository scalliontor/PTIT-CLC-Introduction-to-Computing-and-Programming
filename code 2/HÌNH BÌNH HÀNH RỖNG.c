
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int m = n - 1;
    for ( int i = 1; i<= n; i++){
        for ( int k = 1; k <= m; k++){
            printf("~");
        }
        m--;
        for (int j = 1 ; j <= n; j++){
            if ( i == 1 || i == n || j==1 || j== n){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}