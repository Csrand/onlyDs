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

/*
de forma recursiva 

#include <iostream>
using namespace std;

void inverterArrayRecursivo(int arr[], int inicio, int fim) {
    if (inicio >= fim) {
        return; // Caso base: a inversão está completa
    }
    // Troca os elementos das posições opostas
    int temp = arr[inicio];
    arr[inicio] = arr[fim];
    arr[fim] = temp;

    // Chama a função recursivamente para as próximas posições
    inverterArrayRecursivo(arr, inicio + 1, fim - 1);
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    // Chama a função recursiva para inverter o array
    inverterArrayRecursivo(array, 0, tamanho - 1);

    // Imprime o array invertido
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
*/