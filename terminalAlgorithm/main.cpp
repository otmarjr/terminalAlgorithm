/* 
 * File:   main.cpp
 * Author: otmarpereira
 *
 * Created on 20 de Agosto de 2014, 12:50
 */

#include <cstdlib>
#include <list>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include "regra_temporal.h"

using namespace std;

void testar_instancia_regra_temporal(){
    vector<string> premissa;
    premissa.push_back("a");
    premissa.push_back("b");
    
    vector<string> conclusao;
    conclusao.push_back("c");
    conclusao.push_back("d");
    
    regra_temporal* r = new regra_temporal(premissa.begin(), premissa.end(), conclusao.begin(), conclusao.end());
    
    cout<< r->para_string_linguagem_natural();
}

void testar(){
    testar_instancia_regra_temporal();
    cout<<"fim";
}
/*
 * 
 */
int main(int argc, char** argv) {

    testar();
    return 0;
}

