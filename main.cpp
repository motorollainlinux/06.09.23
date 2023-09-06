#include <iostream>
#include <string>

using std::cout;
using std::cin;

void sort(int length) {
        //buble
        int buff = 0;
        for (int i = 0; i < Arr.length(); i++) {
            if (Arr[i] > Arr[i+1] ) {
                buff = Arr[i+1];
                Arr[i+1] = Arr[i];
                Arr[i] = buff;
            }
        }
    }
int main() {
    std::string Enter;
    bool IsCorrect = false;
    int* Arr;
    Arr = (int*)calloc(1,sizeof(int));
    bool Exit = false;
    int i = 0;
    for(; !Exit ; i++) {
        do{
            cout << i <<"|Enter numbers(y - for exit): ";
            cin >> Enter;
            if (Enter == "y" || Enter == "Y") {
                Exit = true;
                IsCorrect = true;
            } else for (int j = 0; j < Enter.length(); j++) { 
                if (Enter[j] >= 'A' && Enter[j] <= 'Z' || Enter[j] >= 'a' && Enter[j] <= 'z' || Enter[j] >= 'А' && Enter[j] <= 'Я' || Enter[j] >= 'а' && Enter[j] <= 'я') {
                    cout << "Incorrect!!!!!!!!!!!!!!!\n";
                    return -1;
                }
            } 
            Arr = (int*)calloc(i+1,sizeof(int));
            Arr[i] = std::stoi(Enter);
            IsCorrect = true;
            // cout << "test:" << Arr[i] << "\n";
            // cout << "i:" <<i << "\n";
        }while(!IsCorrect);
        cout << "\n";
    }
    sort();
}
// cout << "" << std::endl;
//
//   std::string result;
//   cin >> result;
//
//   if (result != "нет")
//   {
//     return 1;
//   }
//s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'
