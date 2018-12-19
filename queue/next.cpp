/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "struct.cpp"

int next(elem* & pocz, elem* &kon){
    if(pocz!=NULL){
        elem* stary = pocz;
        int wynik = stary->dane;
        if (pocz==kon) kon=NULL;
        pocz = stary->nast;
        delete stary;
        return wynik;
    }
    else {
        throw runtime_error("Pusta kolejka");
    }
}