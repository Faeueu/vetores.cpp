#include <iostream>
using namespace std;

int main() {
    int opc = -1;
    do{
        cout << "1-10 Vetores na ordem inversa \n";
        cout << "2-Soma, Subtracao e Divisao de vetores \n";
        cout << "3-Ler consoantes em um vetor de 10 caracteres \n";
        cout << "0-Sair \n";

        cout << "Escolha uma opcao: ";
        cin >> opc;

        if(opc == 1){
            const int tamanho = 10;
            int vetor[tamanho];

            cout << "Digite 10 numeros inteiros\n";
            for(int i=0; i<tamanho; ++i){
                cout << "Numero" << i+1 << ": ";
                cin >> vetor[i];
            }

            cout << "\nNumeros na ordem inversa\n";
            for(int i=tamanho -1; i>=0; --i){
                cout << vetor[i] << " ";
            }
            break;

        }else if(opc == 2){
            const int tamanho = 5;
            int vetor[tamanho];

            cout << "Digite 5 numeros inteiros:\n";
            for (int i = 0; i < tamanho; ++i) {
                cout << "Numero " << i + 1 << ": ";
                cin >> vetor[i];
            }

            int soma = 0;
            for(int i = 0; i < tamanho; ++i) {
                soma += vetor[i];
            }

            int subtracao = vetor[0];
            for (int i = 1; i < tamanho; ++i) {
                subtracao -= vetor[i];
            }

            float divisao = static_cast<float>(vetor[0]);
            for (int i = 1; i < tamanho; ++i) {
                if (vetor[i] != 0) {
                    divisao /= vetor[i];
                } else {
                    cout << "Divisao por zero nao existe\n";
                    return 1;
                }
            }

            cout << "\nSoma: " << soma << "\n";
            cout << "Subtracao: " << subtracao << "\n";
            cout << "Divisao: " << divisao << "\n";
            break;

        }else if(opc == 3){
            const int tamanho = 10;
            char vetor[tamanho];


            cout << "Digite 10 caracteres:\n";
            for (int i = 0; i < tamanho; ++i) {
                cout << "Caractere " << i + 1 << ": ";
                cin >> vetor[i];
            }


            int consoantes = 0;
            char vogais[] = "aeiouAEIOU";

            for (int i = 0; i < tamanho; ++i) {
                bool Letra = (vetor[i] >= 'a' && vetor[i] <= 'z') || (vetor[i] >= 'A' && vetor[i] <= 'Z');
                if (Letra) {
                    bool Vogal = false;
                    for (int j = 0; j < sizeof(vogais); ++j) {
                        if (vetor[i] == vogais[j]) {
                            Vogal = true;
                            break;
                        }
                    }
                    if (!Vogal) {
                        consoantes++;
                    }
                }
            }


            cout << "\nQuantidade de consoantes lidas: " << consoantes << endl;
            break;

        }else if (opc == 0){
            cout << "Saindo!";
            break;
        }else{
            cout<< "OPCAO INVALIDA";
        }

    }while(opc != 0);
    return 0;
}
