#ifndef SCANNER_H
#define SCANNER_H
#include "Token.h"

class Scanner {

    private:
    istream* input;
    Token lastToken;
    int row;
    int column;

    const static int maxState = 25;
    const static int startState = 0;
    const static int noEdge = -1;
    int automata[maxState+1][256];
    int finite[maxState+1];


    void initAutomata() {
        for(int i = 0; i<=maxState; i++){
            for(int j = 0; j<256; j++){
                automata[i][j] = noEdge;
            }
        }

        //Števila in decimalna števila

        for(int i = '0'; i<='9'; i++){ //Smo v 0. stanju ob številki

            automata[0][i]=1;
        }
        for(int i = '0'; i<='9'; i++){ //Smo v 1. stanju ob številki
            automata[1][i]=1;
        }

        automata[1]['.'] = 2; //Smo v 1. stanju ob piki

        for(int i = '0'; i<='9'; i++){ //Smo v 2. stanju ob številki
            automata[2][i]=13;
        }

        
        for(int i = '0'; i<='9'; i++){ //Smo v 13. stanju ob številki

            automata[13][i]=13;
        }


        //Variables

        for(int i = 97; i<=122; i++){ //Smo v 0. in 3.  stanju ob mali črki
            automata[0][i]=3;
            automata[3][i]=3;
            automata[17][i]=3;
            //automata[4][i]=3; //Poljubno veliko ponavljanj
        }

        for(int i = 65; i<=90; i++){ //Smo v  3.  stanju ob Veliki črki
            automata[3][i]=3;
            //automata[4][i]=3; //Poljubno veliko ponavljanj
        }


        for(int i = '0'; i<='9';i++){ //Smo v 3. stanju ob številki
            automata[3][i]=4;
        }

        for(int i = '0'; i<='9';i++){ //Smo v 4. stanju ob številki
            automata[4][i]=4;
        }


        automata[0]['\n'] = automata[0][' '] = automata[0]['\t']=5;  //Smo v 0. stanju ob presledku, novi vrstici ali tabu
        automata[5]['\n'] = automata[5][' '] = automata[5]['\t']=5;  //Smo v 5. stanju ob presledku, novi vrstici ali tabu



        automata[0]['+']=6; //Smo v 0. stanju ob simbolih
        automata[0]['-']=7;
        automata[0]['{']=8;
        automata[0]['}']=9;
        automata[0][',']=10;
        automata[0]['(']=11;
        automata[0][')']=12;
        automata[0]['*']=18;
        automata[0]['/']=19;
        automata[0]['=']=20;
        automata[0]['>']=21;
        automata[0]['<']=22;
        automata[0]['"']=23;







        //5 NALOGA//////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////



        // Assignment operator :=
        automata[0][':']=14; //Smo v 0. stanju ob ":". Ni finite
        automata[14]['=']=15; // Smo v 15. stanju ob ""="". Je finite
        

        // SemiColon ;
        automata[0][';']=16;

        // Funkcije

        for(int i = 65; i<=90; i++){ //Smo v  3.  stanju ob Veliki črki
            automata[0][i]=17;
            automata[17][i]=17;

            //automata[4][i]=3; //Poljubno veliko ponavljanj
        }




        finite[0]=tLexError;
        finite[1]=tFloat;
        finite[2]=tLexError;
        finite[3]=tVariable;
        finite[4]=tVariable;
        finite[5]=tIgnore;
        finite[6]=tPlus;
        finite[7]=tMinus;
        finite[8]=lCurly;
        finite[9]=rCurly;
        finite[10]=vejica;
        finite[11]=tLParen;
        finite[12]=tRParen;
        finite[13]=tFloat;
        finite[14]=tLexError;
        finite[15]=tAssignmentOperator;
        finite[16]=tSemiColon;
        finite[17]=tFunction;
        finite[18]=krat;
        finite[19]=deljeno;
        finite[20]=jeEnako;
        finite[21]=vec;
        finite[22]=manj;
        finite[23]=quote;
       

        
        
    }

   int getNextState(int aState, int aChar) const{
       if(aChar==-1)return noEdge;
       return automata[aState][aChar];
   }

    bool isFiniteState(int aState) const{
        return finite[aState]!=tLexError;
    }

    int getFiniteState(int aState) const {
        return finite[aState];
    }

    private:
        int peek() {
            return input->peek();
        }

        int read() {
            int temp = input->get();
            column++;
            if(temp=='\n'){
                row++;
                column = 1;
            }
            return temp;
        }
        bool eof() {
            return peek()==-1;
        }

        Token nextTokenImp(){
            int currentState = startState;
            string lexem;
            int startColumn = column;
            int startRow = row;
            do 
              {

                  int tempState = getNextState(currentState, peek());
               
                  if(tempState!=noEdge){
                      currentState = tempState;
                      lexem += (char)read();
                  }
                  else{
                    if(isFiniteState(currentState)){
                        Token token(lexem,startColumn,startRow,getFiniteState(currentState),eof());
                        if(token.getToken()==tIgnore){
                            return nextToken();
                        }
                        else{
                            return token;
                        }
                    }

                    else{
                        return Token("",startColumn,startRow,tLexError, eof());
                    }

                    }


                  }



                 while(true);
              }

              
            public:
            const static int tLexError = -1;
            const static int tIgnore = 0;
            const static int tFloat = 1;
            const static int tVariable = 2;
            const static int tPlus = 3;
            const static int tMinus = 4;
            const static int lCurly = 5;
            const static int rCurly = 6;
            const static int vejica = 7;
            const static int tLParen = 8;
            const static int tRParen = 9;
            const static int tAssignmentOperator = 10;
            const static int tSemiColon = 11;
            const static int tFunction = 2;
            const static int krat = 12;
            const static int deljeno = 13;
            const static int jeEnako = 14;
            const static int vec = 15;
            const static int manj = 16;
            const static int quote  = 17;

            
            
         
                Scanner(){
               
            }


            Scanner(int i){
                row = 1;
                column = 1;
                initAutomata();
            }


            Scanner(istream *aInput){
                row = 1;
                column = 1;
                initAutomata();
                input = aInput;
            }
            
            Token nextToken(){
                return lastToken = nextTokenImp();
            }
            Token currentToken(){
                return lastToken;
            }
        };

#endif