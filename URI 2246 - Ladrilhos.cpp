#include <iostream>

using namespace std;

int cont;
int menor = 40001;


int sequencia(int parede[][201], int i, int j, int A, int L, int cor){

    if (i < 0 || i >= A)
        return 0;
    if (j < 0 || j >= L)
        return 0;
    if (parede[i][j] == cor){
        parede[i][j] = -1;

        return 1
            + sequencia(parede, i+1, j, A, L, cor)
            + sequencia(parede, i-1, j, A, L, cor)
            + sequencia(parede, i, j+1, A, L, cor)
            + sequencia(parede, i, j-1, A, L, cor);
    }

    return 0;
}


int main(){

    int A, L;

    cin >> A >> L;

    int parede[A][201];

    for(int i=0;i<A;i++){
        for(int j=0;j<L;j++){
            cin >> parede[i][j];
        }
    }

    for(int i=0;i<A;i++){
        for(int j=0;j<L;j++){
            if (parede[i][j] != -1){
                cont = sequencia(parede, i, j, A, L, parede[i][j]);
                if (menor > cont){
                    menor = cont;
                    if (menor == 1){
                        cout << menor << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << menor << endl;


return 0;
}