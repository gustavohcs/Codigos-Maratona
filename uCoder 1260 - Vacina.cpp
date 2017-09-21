#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

int main(){

    char X[16], D[16], Z[16], aux[16] = {'\0'}, full[1000][30] = {'\0'};

    char *x = X;
    char *d = D;
    char *z = Z;

    int T,t,i,j,g=0,k,cont = 0,M=0,m=0;

    cin.getline(X,16);
    cin.getline(D,16);
    cin.getline(Z,16);

    cin >> T;

    for (k=0;k<strlen(X);k++){
        for(j=0;j<strlen(D);j++){
            for (i=0;i<strlen(Z);i++){
                if (x[i] == d[j] && x[i] == Z[k]){
                    t = 0;
                    while (t<T){
                        if (x[i+t] == d[j+t] && x[i+t] == Z[k+t]){
                            aux[t] = x[i+t];
                            full[M][t] = x[i+t];
                            t++;
                        }
                        else
                            break;
                    }
                    if (t == T && strlen(aux) == T){
                        M++;
                    }
                }
            }
        }
    }


    while (m<M){
        //cout << m << ": " << full[m] << endl;
        for(i=1;i<M;i++){
            if (strcmp(full[m], full[m+i]) == 0){
                full[m+i][0] = {'-'};
            }
        }
        m++;
    }

    /*m=0;
    while(m<M){
        cout << m << ": " << full[m] << endl;
        m++;
    }
*/
    m=0;
    while(m<M){
        if (full[m][0] != '-'){
            cont++;
        }
        m++;
    }

    cout << cont << endl;

return 0;
}