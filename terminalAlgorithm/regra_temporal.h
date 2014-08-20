/* 
 * File:   regra_temporal.h
 * Author: otmarpereira
 *
 * Created on 20 de Agosto de 2014, 12:52
 */

#ifndef REGRA_TEMPORAL_H
#define	REGRA_TEMPORAL_H
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef string elemento_regra;

class regra_temporal {
public:
    string para_string_linguagem_natural();
    string para_string_LTL();
    regra_temporal(vector<string>::const_iterator inicio_premissa, vector<string>::const_iterator fim_premissa, vector<string>::const_iterator inicio_conclusao, vector<string>::const_iterator fim_conclusao);
    
private:
    vector<elemento_regra> elementos_premissa;
    vector<elemento_regra> elementos_conclusao;
};

#endif	/* REGRA_TEMPORAL_H */

