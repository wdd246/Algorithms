/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "struct.cpp"

void print(elem* stos) {
    elem* tmp = stos;
    while (tmp != NULL) {
        if (tmp != stos) {
            cout << " <- ";
        }
        cout << tmp->dane;
        tmp = tmp->nast;
        }
    cout << endl;
}