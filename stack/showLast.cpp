/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "struct.cpp"

int topEl(elem* &stos){
    if (stos!=NULL){
        int wynik = stos->dane;
        return wynik;
    }
    else
        throw runtime_error("Pusty stos"); 
}