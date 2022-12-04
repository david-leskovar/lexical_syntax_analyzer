
#ifndef TOKEN_H
#define TOKEN_H
#include <iostream>
#include <string>
using namespace std;

class Token {      
  private:             
    string lexem;    
    int column;
    int row;
    int token;
    bool eof;
    string tip = "Variable";


    public:
    Token(const string& aLexem, int aColumn, int aRow, int aToken, bool aEof):lexem(aLexem),column(aColumn), row(aRow), token(aToken), eof(aEof){
        switch(aToken){
            case 1:
            tip = "Float";
            break;
            case 2:
            tip = "Variable";
            break;
            case 3:
            tip = "Plus";
            break;
            case 4:
            tip = "Minus";
            break;
            case 5:
            tip = "lCurly";
            break;
            case 6:
            tip = "rCurly";
            break;
            case 7:
            tip = "Vejica";
            break;
            case 8:
            tip = "lParen";
            break;
            case 9:
            tip = "rParen";
            break;
            case 10:
            tip = "Assignment operator";
            break;
            case 11:
            tip ="Semicolon";
            break;
            case 12:
            tip = "Krat";
            break;
            case 13:
            tip = "deljeno";
            break;
            case 14:
            tip = "enako";
            break;
            case 15:
            tip = "vec";
            break;
            case 16:
            tip = "manj";
            break;
            case 17:
            tip = "quote";
            break;

    
            default:
            tip = "unidentified";
            break;
        }

    }
    Token(): lexem(""){
    }
     
    const string getLexem() const{
        return lexem;
    } 
    const int getRow() const {
        return row;
    }
    const int getColumn() const{
        return column;
    }
    const int getToken() const{
        return token;
    }
    const bool isEof() const{
        return eof;
    }

    const string getTip() const{
        return tip;
    }

    friend ostream& operator<<(ostream &out, const Token& aToken){

        out << "'" << aToken.getLexem() << "' " <<
            aToken.getToken() << " (" << aToken.getRow() <<
            ", " << aToken.getColumn() << ") " <<
            (aToken.isEof()?"true":"false");

        return out;
    }
};

#endif 