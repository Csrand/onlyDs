#include <iostream>
using namespace std;
/* Meu codigo

int main(){
    int array[5] = {1,2,3,4,5};
    int arr[5];
    int aux = 0;
    for(int i = 4; i >= 0; i--){
        arr[aux] = array[i];
        aux++;
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
*/
//correção

#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o tamanho do array

    for (int i = 0; i < tamanho / 2; i++) {
        // Troca os elementos das posições opostas
        int temp = array[i];
        array[i] = array[tamanho - 1 - i];
        array[tamanho - 1 - i] = temp;
    }

    // Imprime o array invertido
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }

    return 0;
}