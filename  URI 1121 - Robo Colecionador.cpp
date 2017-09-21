#include <iostream>

using namespace std;

int main(){

    int L, C, S,i,j;

    char comando;
    char frente;
    int localL, localC;

    while(cin >> L >> C >> S){
        if (L == 0 && C == 0 && S == 0)
            break;

    char arena[105][105];
    int cont=0;

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            cin >> arena[i][j];
            if(arena[i][j] == 'N'){
                frente = 'N';
                localL = i;
                localC = j;
            }
            else if(arena[i][j] == 'L'){
                frente = 'L';
                localL = i;
                localC = j;
            }
            else if(arena[i][j] == 'S'){
                frente = 'S';
                localL = i;
                localC = j;
            }
            else if(arena[i][j] == 'O'){
                frente = 'O';
                localL = i;
                localC = j;
            }
        }
    }

    //cout << endl <<  localL << "  " <<  localC << " " << frente << endl;

    for(int g=0;g<S;g++){
        cin >> comando;
        if (comando == 'D'){
            if (frente == 'N')
                frente = 'L';
            else if (frente == 'L')
                frente = 'S';
            else if (frente == 'S')
                frente = 'O';
            else if (frente == 'O')
                frente = 'N';
        }
        else if (comando == 'E'){
            if (frente == 'N')
                frente = 'O';
            else if (frente == 'L')
                frente = 'N';
            else if (frente == 'S')
                frente = 'L';
            else if (frente == 'O')
                frente = 'S';
        }
        else if (comando == 'F'){
     //       for(i=0;i<L;i++){
     //           cout << endl;
     //               for(j=0;j<C;j++){
     //                   cout << arena[i][j];
     //               }
    //        }
    //    cout << endl;
            if (frente == 'O'){
                if (localC>0 && arena[localL][localC-1] != '#'){
                    if (arena[localL][localC-1] == '*'){
                        cont++;
                        arena[localL][localC-1] = '.';
                    }
                    localC--;
                }
            }
            else if (frente == 'S'){
                if (localL<L-1 && arena[localL+1][localC] != '#'){
                    if (arena[localL+1][localC] == '*'){
                        cont++;
                        arena[localL+1][localC] = '.';
                    }
                    localL++;
                }
            }
            else if (frente == 'L'){
                if (localC<C-1 && arena[localL][localC+1] != '#'){
                    if (arena[localL][localC+1] == '*'){
                        cont++;
                        arena[localL][localC+1] = '.';
                    }
                    localC++;
                }
            }
            else if (frente == 'N'){
                if (localL>0 && arena[localL-1][localC] != '#'){
                    if (arena[localL-1][localC] == '*'){
                        cont++;
                        arena[localL-1][localC] = '.';
                    }
                    localL--;
                }
            }
        }
    }

    //cout << endl <<  localL << "  " <<  localC << " " << frente << endl;

    cout << cont << endl;

    }



return 0;
}