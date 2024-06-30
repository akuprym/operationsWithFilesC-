//
//  main.cpp
//  operationsWithFilesC++
//
//  Created by admin on 29.06.24.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    setlocale(LC_ALL, "ru");
    string path = "myfile.txt";
    
    ofstream fout;
    fout.open(path,ofstream::app);
    
    if (!fout.is_open()) {
        cout << "Ошибка открытия файла" << endl;
    } else {
        for (int i = 0; i < 5; i++) {
            cout << "Введите число:" << endl;
            int a;
            cin >> a;
            fout << a;
            fout << "\n";
        }
    }
    
    fout.close();

    return 0;
}
