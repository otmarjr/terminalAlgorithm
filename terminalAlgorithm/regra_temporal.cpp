/* 
 * File:   regra_temporal.cpp
 * Author: otmarpereira
 * 
 * Created on 20 de Agosto de 2014, 12:52
 */

#include "regra_temporal.h"
#include <algorithm>
#include <sstream>
#include <iterator>

regra_temporal::regra_temporal(vector<string>::const_iterator inicio_premissa, vector<string>::const_iterator fim_premissa, vector<string>::const_iterator inicio_conclusao, vector<string>::const_iterator fim_conclusao) {
    this->elementos_premissa.insert(this->elementos_premissa.end(), inicio_premissa, fim_premissa);
    this->elementos_conclusao.insert(this->elementos_conclusao.end(), inicio_conclusao, fim_conclusao);
}

string regra_temporal::para_string_linguagem_natural() {
    stringstream ss;

    if (this->elementos_premissa.size() > 0) {
        copy(this->elementos_premissa.begin(), this->elementos_premissa.end() - 1, ostream_iterator<string>(ss, ","));
        ss << this->elementos_premissa.back();
    }


    ss << " --> ";

    if (this->elementos_conclusao.size() > 0) {
        copy(this->elementos_conclusao.begin(), this->elementos_conclusao.end() - 1, ostream_iterator<string>(ss, ","));
        ss << this->elementos_conclusao.back();
    }

    return ss.str();
}



