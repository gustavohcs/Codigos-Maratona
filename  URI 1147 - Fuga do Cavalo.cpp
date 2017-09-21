#include <iostream>
#include <cmath>

using namespace std;

int main(){

    char tabuleiro[10][10];
    int i,j,N,a,b,c,d,e,f,g,h;
    char cavalo[5] = {'\0'};
    char peca[10][5] = {'\0'};
    int cont=0;
    int caso=0;

    while(cin.getline(cavalo,5)){
        if (cavalo[0] == '0')
            break;

    for(j=0;j<8;j++){
        for(i=0;i<8;i++){
            tabuleiro[j][i] = 'O';
        }
    }

    for(i=0;i<8;i++){
        cin.getline(peca[i],5);
        if (peca[i][0] == '8'){
            if (peca[i][1] == 'a')
                tabuleiro[1][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[1][0] = 'X';
                tabuleiro[1][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[1][1] = 'X';
                tabuleiro[1][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[1][2] = 'X';
                tabuleiro[1][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[1][3] = 'X';
                tabuleiro[1][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[1][4] = 'X';
                tabuleiro[1][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[1][5] = 'X';
                tabuleiro[1][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[1][6] = 'X';
            }
        }
        if (peca[i][0] == '7'){
            if (peca[i][1] == 'a')
                tabuleiro[2][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[2][0] = 'X';
                tabuleiro[2][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[2][1] = 'X';
                tabuleiro[2][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[2][2] = 'X';
                tabuleiro[2][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[2][3] = 'X';
                tabuleiro[2][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[2][4] = 'X';
                tabuleiro[2][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[2][5] = 'X';
                tabuleiro[2][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[2][6] = 'X';
            }
        }
        if (peca[i][0] == '6'){
                if (peca[i][1] == 'a')
                tabuleiro[3][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[3][0] = 'X';
                tabuleiro[3][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[3][1] = 'X';
                tabuleiro[3][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[3][2] = 'X';
                tabuleiro[3][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[3][3] = 'X';
                tabuleiro[3][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[3][4] = 'X';
                tabuleiro[3][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[3][5] = 'X';
                tabuleiro[3][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[3][6] = 'X';
            }
        }
        if (peca[i][0] == '5'){
                if (peca[i][1] == 'a')
                tabuleiro[4][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[4][0] = 'X';
                tabuleiro[4][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[4][1] = 'X';
                tabuleiro[4][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[4][2] = 'X';
                tabuleiro[4][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[4][3] = 'X';
                tabuleiro[4][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[4][4] = 'X';
                tabuleiro[4][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[4][5] = 'X';
                tabuleiro[4][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[4][6] = 'X';
            }
        }
        if (peca[i][0] == '4'){
                if (peca[i][1] == 'a')
                tabuleiro[5][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[5][0] = 'X';
                tabuleiro[5][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[5][1] = 'X';
                tabuleiro[5][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[5][2] = 'X';
                tabuleiro[5][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[5][3] = 'X';
                tabuleiro[5][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[5][4] = 'X';
                tabuleiro[5][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[5][5] = 'X';
                tabuleiro[5][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[5][6] = 'X';
            }
        }
        if (peca[i][0] == '3'){
                if (peca[i][1] == 'a')
                tabuleiro[6][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[6][0] = 'X';
                tabuleiro[6][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[6][1] = 'X';
                tabuleiro[6][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[6][2] = 'X';
                tabuleiro[6][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[6][3] = 'X';
                tabuleiro[6][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[6][4] = 'X';
                tabuleiro[6][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[6][5] = 'X';
                tabuleiro[6][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[6][6] = 'X';
            }
        }
        if (peca[i][0] == '2'){
                if (peca[i][1] == 'a')
                tabuleiro[7][1] = 'X';
            else if (peca[i][1] == 'b'){
                tabuleiro[7][0] = 'X';
                tabuleiro[7][2] = 'X';
            }
            else if (peca[i][1] == 'c'){
                tabuleiro[7][1] = 'X';
                tabuleiro[7][3] = 'X';
            }
            else if (peca[i][1] == 'd'){
                tabuleiro[7][2] = 'X';
                tabuleiro[7][4] = 'X';
            }
            else if (peca[i][1] == 'e'){
                tabuleiro[7][3] = 'X';
                tabuleiro[7][5] = 'X';
            }
            else if (peca[i][1] == 'f'){
                tabuleiro[7][4] = 'X';
                tabuleiro[7][6] = 'X';
            }
            else if (peca[i][1] == 'g'){
                tabuleiro[7][5] = 'X';
                tabuleiro[7][7] = 'X';
            }
            else if (peca[i][1] == 'h'){
                tabuleiro[7][6] = 'X';
            }
        }
    }

    int cavaloJ = abs((cavalo[0]-'0')-8);
    int cavaloI = cavalo[1] - '0' - 49;

    if(cavaloJ+2 < 8 && cavaloI+1 < 8){
       // cout << "entrou1" << endl;
        if (tabuleiro[cavaloJ+2][cavaloI+1] == 'O')
            cont++;
    }
    if(cavaloJ+2 < 8 && cavaloI-1 >= 0){
       // cout << "entrou2" << endl;
        if (tabuleiro[cavaloJ+2][cavaloI-1] == 'O')
            cont++;
    }
    if(cavaloJ-2 >= 0 && cavaloI+1 < 8){
       // cout << "entrou3" << endl;
        if (tabuleiro[cavaloJ-2][cavaloI+1] == 'O')
            cont++;
    }
    if(cavaloJ-2 >= 0 && cavaloI-1 >=0){
       // cout << "entrou4" << endl;
        if (tabuleiro[cavaloJ-2][cavaloI-1] == 'O')
            cont++;
    }
    if(cavaloJ+1 < 8 && cavaloI+2 < 8){
       // cout << "entrou5" << endl;
        if (tabuleiro[cavaloJ+1][cavaloI+2] == 'O')
            cont++;
    }
    if(cavaloJ+1 < 8 && cavaloI-2 >= 0){
       // cout << "entrou6" << endl;
        if (tabuleiro[cavaloJ+1][cavaloI-2] == 'O')
            cont++;
    }
    if(cavaloJ-1 >= 0 && cavaloI+2 < 8){
        //cout << "entrou7" << endl;
        if (tabuleiro[cavaloJ-1][cavaloI+2] == 'O')
            cont++;
    }
    if(cavaloJ-1 >= 0 && cavaloI-2 >= 0){
        //cout << "entrou8" << endl;
        if (tabuleiro[cavaloJ-1][cavaloI-2] == 'O')
            cont++;
    }


    caso++;

    cout << "Caso de Teste #" << caso << ": " << cont << " movimento(s)." << endl;

    cont=0;

    }


return 0;
}