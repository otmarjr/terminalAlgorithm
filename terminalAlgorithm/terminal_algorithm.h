/* 
 * File:   terminalAlgorithm.h
 * Author: otmarpereira
 *
 * Created on 20 de Agosto de 2014, 12:51
 */

#ifndef TERMINALALGORITHM_H
#define	TERMINALALGORITHM_H
#include <vector>
#include <string>
#include "terminal_algorithm.h"
#include "regra_temporal.h"

using namespace std;

typedef vector<string>::const_iterator seq_db_iterator;

class terminal_algorithm {
public:

terminal_algorithm(seq_db_iterator seq_db_begin, seq_db_iterator seq_db_end);

vector<regra_temporal> get_rules(double min_sup, double min_conf);
    
private:
    vector<string> sequence_db;
};

#endif	/* TERMINALALGORITHM_H */

