#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "usuario.h"

using namespace std;

int main() {

  //Permite usar acentos
    setlocale(LC_ALL,"");

    vector<Usuario> cadastro;
    map<int, string> usuarios;
    
    usuarios.insert(pair<int, string>(383474924, "João"));
    usuarios.insert(pair<int, string>(56492578095, "Maria"));
    usuarios.insert(pair<int, string>(87465265, "José"));

    // imprimir map usuários
    map<int, string>::iterator it;
    for (it = usuarios.begin(); it != usuarios.end(); ++it) {
        cout << it->first << endl;
        cout << it->second << endl;
    }
    cout << endl;

    // buscar usuário pelo CPF
    it = usuarios.find(383474924);
      
    if(it == usuarios.end())
        cout << "Usuário não encontrado" ;
    else
        cout << "Usuário encontrado : " 
          << it->first << "->" << it->second ;
      
    cout << endl ;
  
    return 0;
}