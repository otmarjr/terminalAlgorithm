/* 
 * File:   terminalAlgorithm.cpp
 * Author: otmarpereira
 * 
 * Created on 20 de Agosto de 2014, 12:51
 */

#include "terminal_algorithm.h"

terminal_algorithm::terminal_algorithm(seq_db_iterator seq_db_begin, seq_db_iterator seq_db_end){
    this->sequence_db.insert(this->sequence_db.end(), seq_db_begin, seq_db_end);
}

vector<regra_temporal> terminal_algorithm::get_rules(double min_sup, double min_conf) {

}


