#include "Token.h"
#include "Scanner.h"
#include "Parser.h"
#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    
    istream* in = &cin;
    ifstream f{"Testni primeri/test3.txt"};
    in = &f;

    Scanner scan(in);
    Parser par(scan);
    
    if(par.Parse()){
        cout << "accept";
    }
    else{
        cout << "reject";
    }





    

    
    /*while(!scan.currentToken().isEof()){
        if(scan.nextToken().getToken()==-1){

            cout << " Leksikalna napaka, Vrstica:"<<scan.currentToken().getRow() << " Stolpec:" << scan.currentToken().getColumn();
            break;

        }
       
        else{
            cout <<"\""<< scan.currentToken().getLexem()<<"\"" <<"("<<scan.currentToken().getTip()<<") ";
        }
    }

    */






    



  
  


}
