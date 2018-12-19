/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "struct.cpp"

void print(elem* pocz) {
    elem* tmp = pocz;
    while (tmp != NULL) {
        if (tmp != pocz) {
            cout << " <- ";
        }
        cout << tmp->dane;
        tmp = tmp->nast;
    }
    cout << endl;
}