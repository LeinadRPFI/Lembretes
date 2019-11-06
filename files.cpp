#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

    int main (){

        setlocale(LC_ALL, "");


        int decisao, decisao2, posicao;
        string lembrete;
        vector <string> tarefinhas;

        while(4 > 2){

        cout << "Digite [1] para adicionar um lembrete" << endl;
        cout << "Digite [2] para remover um lembrete" << endl;
        cout << "Digite [3] para sair do programa" << endl;

        cout << endl;

        cin >> decisao;

        cout << endl;

        if(decisao == 1){

            cout << "Qual o lembrete que desejas adicionar?" << endl;
            cin.ignore();
            getline(cin, lembrete);
            tarefinhas.push_back(lembrete);

            cout << endl;

        }

        else if(decisao == 2){

            cout << "Qual a posição do lembrete que desejas apagar?" << endl;
            cout << "Posição: ";
            cin >> posicao;

            cout << endl;

            tarefinhas.erase(tarefinhas.begin() + posicao - 1);

            cout << "Lembrete apagado com sucesso!!" << endl;
        }

        else break;

        }

        while(4 > 2){

        cout << "Os lembreter que foram adicionados são:" << endl << endl;

        sort(begin(tarefinhas), end(tarefinhas));

        for(int i = 0; i < tarefinhas.size(); i++){

            cout << i + 1 << "º lembrete: " << tarefinhas[i] << endl;

        }

        cout << endl;

        cout << "Digite [1] para salvar todos os lembretes" << endl;
        cout << "Digite [2] para apagar um dos lembretes" << endl;
        cout << "Digite [3] para apagar todos os lembretes" << endl;

        cin >> decisao2;

        cout << endl;

        if(decisao2 == 1) break;


         if(decisao2 == 2){

            cout << "Qual a posição do lembrete que desejas apagar?" << endl;
            cout << "Posição: ";
            cin >> posicao;

            cout << endl;

            tarefinhas.erase(tarefinhas.begin() + posicao - 1);

            cout << "Lembrete apagado com sucesso!!" << endl;

        }

        if(decisao2 == 3){

            tarefinhas.clear();
            cout << "Todos os lembretes foram apagados com sucesso!!" << endl;


        }

    }

    ofstream arquivo_lembretes("lembretes.txt");


        for(int i = 0; i < tarefinhas.size(); i++){

            arquivo_lembretes << i + 1 << "º lembrete: " << tarefinhas[i] << endl;

        }

    return 0;

}
