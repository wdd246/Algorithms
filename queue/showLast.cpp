/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "struct.cpp"

int firstEl(elem* pocz){
    if(pocz!=NULL){
        int wynik = pocz->dane;
        return wynik;
    }
    else
        throw runtime_error("Pusta kolejka");
}