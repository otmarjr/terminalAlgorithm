#include "banco_dados.h"

#include <vector>
using namespace std;


vector<item*> massa_testes_itens()
{
    vector<item*> v;
    
    for (int i=1;i<=5;i++){
        v.push_back(new item(i));
    }
    
    return v;
}
vector<transacao*> massa_testes_vendas(vector<item*> itens)
{
    vector<transacao*> t;
    
    transacao* t100 = new transacao(100);
    t100->adicionar_item_comprado(itens[0]);
    t100->adicionar_item_comprado(itens[1]);
    t100->adicionar_item_comprado(itens[4]);
            
    transacao* t200 = new transacao(200);
    t200->adicionar_item_comprado(itens[1]);
    t200->adicionar_item_comprado(itens[3]);
    
    transacao* t300 = new transacao(300);
    t300->adicionar_item_comprado(itens[1]);
    t300->adicionar_item_comprado(itens[2]);
    
    transacao* t400 = new transacao(400);
    t400->adicionar_item_comprado(itens[0]);
    t400->adicionar_item_comprado(itens[1]);
    t400->adicionar_item_comprado(itens[3]);
    
    transacao* t500 = new transacao(500);
    t500->adicionar_item_comprado(itens[0]);
    t500->adicionar_item_comprado(itens[2]);
    
    transacao* t600 = new transacao(600);
    t600->adicionar_item_comprado(itens[1]);
    t600->adicionar_item_comprado(itens[2]);
    
    transacao* t700 = new transacao(700);
    t700->adicionar_item_comprado(itens[0]);
    t700->adicionar_item_comprado(itens[2]);
    
    transacao* t800 = new transacao(800);
    t800->adicionar_item_comprado(itens[0]);
    t800->adicionar_item_comprado(itens[1]);
    t800->adicionar_item_comprado(itens[2]);
    t800->adicionar_item_comprado(itens[4]);
    
    transacao* t900 = new transacao(900);
    t900->adicionar_item_comprado(itens[0]);
    t900->adicionar_item_comprado(itens[1]);
    t900->adicionar_item_comprado(itens[2]);
    
    t.push_back(t100);
    t.push_back(t200);
    t.push_back(t300);
    t.push_back(t400);
    t.push_back(t500);
    t.push_back(t600);
    t.push_back(t700);
    t.push_back(t800);
    t.push_back(t900);
    
    return t;
}

banco_dados::banco_dados(vector<item*> itens_a_venda, vector<transacao*> vendas)
{
    this->itens_a_venda = itens_a_venda;
    this->vendas = vendas;
}

banco_dados banco_dados::gerar_massa_testes(){
    vector<item*> its = massa_testes_itens();
    vector<transacao*> v = massa_testes_vendas(its);
    return banco_dados(its, v);
}

itemset_frequente banco_dados::f1_itemset(float suporte_minimo){
    int k = 1;
    itemset_frequente f1(k);
    for (int i=0;i<this->itens_a_venda.size();i++){
        item* it = this->itens_a_venda[i];
        
        int count_i = 0;
        int T = this->vendas.size();
        for (int j=0;j<T;j++){
            transacao* t = this->vendas[j];
            
            if (t->possui_item(it)){
                count_i++;
            }
        }
        
        if (count_i/(1.0f*T) >= suporte_minimo){
            vector<item*> is1;
            is1.push_back(it);
            f1.adicionar_conjunto(is1);
        }
    }
    
    return f1;
}

itemset_frequente banco_dados::obter_conjunto_a_priori(float suporte_minimo){
    itemset_frequente L1 = f1_itemset(suporte_minimo);
    itemset_frequente LkmenosUm = L1;
    
    for (int k=2;!LkmenosUm.esta_vazio();k++){
        itemset_frequente Ck = apriori_gen(LkmenosUm);
    }
    int n=0;
    itemset_frequente isf(n);
    return isf;
}

itemset_frequente banco_dados::apriori_gen(itemset_frequente Lkmenos1)
{
    int n=0;
    
    for (int i=0; i<Lkmenos1.tamanho();i++){
        for (int j=0;j<Lkmenos1.tamanho();j++){
            
        }
    }
    
    return itemset_frequente(n);
}

bool banco_dados::tem_sub_conjunto_infrequente(itemset_frequente Ck, itemset_frequente Lkmenos1)
{
    return false;
}