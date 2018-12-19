/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "struct.cpp"

const int N = 100; //rozmiar tablicy
int stos [N];
int rozm = 0;

void push(int x){
    if (rozm==N) cout<<"Stos jest pełny";
    else {
        stos [rozm] = x;
        rozm++;
    }
}

int pop(){
    if (rozm==0) throw runtime_error("Pusta stos");
    else {
        rozm--;
        int wynik = stos[rozm];
        return wynik;
    }
}