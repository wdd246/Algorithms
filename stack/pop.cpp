/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "struct.cpp"

int pop(elem* &stos){
    if (stos!=NULL){
        elem* stary = stos;
        int wynik = stos->dane;
        stos = stos->nast;
        delete stary;
        return wynik;
    } 
    else 
        throw runtime_error("Pusty stos");
}