
    #include<stdio.h>
    #include<math.h>
    #include <string.h>
    #include <stdlib.h>

    int main(){
        int n,m;
        scanf("%d%d",&n,&m);
        int ch[m];
        int a =1;
        for (int i = 0; i< m ;i++){
            ch[i]  = a;
            a++;
        }
        a--;
        int tmp = 0 ;
        int dem;
        int b =a;
            
        int mark = 0;  
        for ( int i = 0 ;i < n ; i++){
            if (ch[tmp - 1] == m) mark = 1;
            if ( mark == 0 ){
                for ( int l = tmp ; l < a ; l++){
                    printf("%d",ch[l]);
                }
                for ( int l = a - 2  ; l > a - tmp - 2 ; l--){
                    printf("%d",ch[l]);
                }
                tmp++;
                
            }
            else if ( mark  == 1){
                for ( int  l =0 ; l < m ;l++) {
                    ch[l]++;
                }
                for ( int l = tmp - 1 ; l >= 0 ; l--){
                    printf("%d",ch[l]);
                }
            }
            printf("\n");
        }
            
    }
