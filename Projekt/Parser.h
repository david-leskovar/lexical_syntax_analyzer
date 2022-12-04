#include "Token.h"
#include "Scanner.h"
#include <iostream>
#include <fstream>
#include <iostream>
#ifndef PARSER_H
#define PARSER_H
using namespace std;


class Parser {

    private:

        Scanner sc;
        Token currentToken;


        bool E(){


            if(currentToken.getLexem()=="city"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                                nextToken();
                                    if(BP()&&currentToken.getTip()=="rCurly"){
                        
                                    return true;
                                    }
                                    else{
                                     return false;
                                    }
                            }
                            else{
                            return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }

                
            }
            else{
                return false;
            }



            
           

            
        }
        
        bool BP(){

            if(currentToken.getTip()=="Variable"){
                
                return B()&&BP();
            }

            else{
                 return true;
            }

        }

        bool B(){

            if(currentToken.getLexem()=="road"){
              
                return BLOCKS();
                       
            }

            else if(currentToken.getLexem()=="river"){
                return BLOCKS();

            }

             else if(currentToken.getLexem()=="building"){
                return BLOCKS();

            }
            else if(currentToken.getLexem()=="field"){
                return BLOCKS();

            }
            else if(currentToken.getLexem()=="park"){
                return BLOCKS();

            }
            else if(currentToken.getLexem()=="tree"){
                return COMMANDS();

            }
            else if(currentToken.getLexem()=="bin"){
               return COMMANDS();

            }
            else if(currentToken.getLexem()=="sign"){
               return COMMANDS();

            }
             else if(currentToken.getLexem()=="lake"){
                return BLOCKS();

            }
            else if(currentToken.getLexem()=="roundabout"){
               return BLOCKS();

            }
            else if(currentToken.getLexem()=="var"){
                return COMMANDS();
            }
            else if(currentToken.getLexem()=="point"){
                return COMMANDS();
            }
            else if(currentToken.getLexem()=="list"){
               return COMMANDS();
            }

        
            else if(currentToken.getLexem()=="bend"){
                return COMMANDS();
            }
            else if(currentToken.getLexem()=="line"){

               return COMMANDS();
                

            }
            else if(currentToken.getLexem()=="box"){
                return COMMANDS();
            }
            else if(currentToken.getLexem()=="circle"){
                return COMMANDS();
            }
            else if(currentToken.getLexem()=="elipse"){
                return COMMANDS();
            }

            else if(currentToken.getLexem()=="if"){
                return COMMANDS();
            }
             else if(currentToken.getLexem()=="while"){
                return COMMANDS();
            }

            else if(currentToken.getLexem()=="foreach"){
                return COMMANDS();
            }

         

            
            

            else{
                return false;
            }

        }

        bool BLOCKS(){

            if(currentToken.getLexem()=="road"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }

           else if(currentToken.getLexem()=="river"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }

           else if(currentToken.getLexem()=="building"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }
           else if(currentToken.getLexem()=="field"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }
            else if(currentToken.getLexem()=="park"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }

            else if(currentToken.getLexem()=="lake"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }
            else if(currentToken.getLexem()=="roundabout"){
                nextToken();
                if(currentToken.getTip()=="quote"){
                    nextToken();
                    if(currentToken.getTip()=="Variable"){
                        nextToken();
                        if(currentToken.getTip()=="quote"){
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                             nextToken();
                        
                        if(MULTILINECC() && currentToken.getTip()=="rCurly"){
                            
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                
                                nextToken();
                                return true;
                            }
                            else{
                                
                                return false;
                            }
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                        }
                        else{
                            return false;
                        }

                    }
                    else{
                        return  false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }







           

        }

        bool MULTILINECC(){

            if(currentToken.getTip()=="Variable"){
                
                return COMMANDS()&&MULTILINECC();
            }

            
            else{
                 return true;
            }

        }

        bool COMMANDS(){
            if(currentToken.getLexem()=="bend"){
                return BEND();
            }
            else if(currentToken.getLexem()=="line"){

                return LINE();
                

            }
            else if(currentToken.getLexem()=="box"){
                return BOX();
            }
            else if(currentToken.getLexem()=="circle"){
                return CIRCLE();
            }
            else if(currentToken.getLexem()=="elipse"){
                return ELIPSE();
            }

            else if(currentToken.getLexem()=="if"){
                return IFELSE();
            }
             else if(currentToken.getLexem()=="while"){
                return WHILE();
            }

            else if(currentToken.getLexem()=="tree"){
                return TREEBINSIGN();
            }
             else if(currentToken.getLexem()=="bin"){
                return TREEBINSIGN();
            }
            else if(currentToken.getLexem()=="sign"){
                return TREEBINSIGN();
            }

            else if(currentToken.getLexem()=="var"){
                return VAR();
            }
            else if(currentToken.getLexem()=="point"){
               return VAR();
            }

            else if(currentToken.getLexem()=="list"){
               return VAR();
            }
          

            else if(currentToken.getLexem()=="foreach"){
                return FOREACH();
            }

            

            else{
                return false;
            }

        }

        bool IFELSE(){
            if(currentToken.getLexem()=="if"){
                
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    
                    nextToken();
                    if(STATEMENT()){
                        

                        if(currentToken.getTip()=="rParen"){
                            
                            nextToken();
                            

                            if(currentToken.getTip()=="lCurly"){
                                
                                nextToken();

                                if(MULTILINECC()){
                                    
                                    if(currentToken.getTip()=="rCurly"){
                                        
                                        nextToken();
                                        if(currentToken.getLexem()=="else"){
                                            
                                            nextToken();
                                            if(currentToken.getTip()=="lCurly"){
                                                nextToken();
                                                if(MULTILINECC()){
                                                
                                                    if(currentToken.getTip()=="rCurly"){
                                                        nextToken();
                                                        return true;
                                                        
                                                    }
                                                    else{
                                                        return false;
                                                    }
                                                }
                                                else{
                                                    return false;
                                                }

                                            }
                                        
                                        }
                                        else{
                                            return false;
                                        }
                                    }
                                    else{
                                        return false;
                                    }
                                }


                                else{
                                    return false;
                                }
                            }
                            else{
                                return false;
                            }
                            return true;
                        }
                        else{
                            return false;
                        }
                        
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            return false;
        }

        bool WHILE(){

             if(currentToken.getLexem()=="while"){
                
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    
                    nextToken();
                    if(STATEMENT()){
                        

                        if(currentToken.getTip()=="rParen"){
                            
                            nextToken();
                            

                            if(currentToken.getTip()=="lCurly"){
                                
                                nextToken();

                                if(MULTILINECC()){
                                    
                                    if(currentToken.getTip()=="rCurly"){
                                        
                                        nextToken();
                                        return true;
                                    }
                                    else{
                                        return false;
                                    }
                                }


                                else{
                                    return false;
                                }
                            }
                            else{
                                return false;
                            }
                            return true;
                        }
                        else{
                            return false;
                        }
                        
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            return false;

        }

        bool FOREACH(){

            if(currentToken.getLexem()=="foreach"){
                nextToken();
                if(currentToken.getTip()=="Variable"){
                    nextToken();
                    if(currentToken.getLexem()=="in"){
                        nextToken();
                        if(currentToken.getTip()=="Variable"){
                            
                            nextToken();
                            if(currentToken.getTip()=="lCurly"){
                                nextToken();
                                if(MULTILINECC()){
                                    
                                    
                                    if(currentToken.getTip()=="rCurly"){
                                       
                                        nextToken();
                                        return true;
                                    }   
                                    else{
                                        return false;
                                    }
                                }
                                else{
                                    return false;
                                }

                            }
                            else{
                                return false;
                            }

                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

        bool STATEMENT(){

           
            if(O()){
                
               
                
                if(currentToken.getTip()=="enako" || currentToken.getTip()=="vec" || currentToken.getTip()=="manj"){

                    
                    nextToken();
                    if(O()){
                        return true;

                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
               

            }
            else{
                return false;
            }
        }

        bool BEND(){
            if(currentToken.getLexem()=="bend"){
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="Vejica"){
                        nextToken();
                        if(currentToken.getTip()=="Variable" || POINT()){
                            nextToken();
                            if(currentToken.getTip()=="Vejica"){
                                nextToken();
                                if(O()){
                                    if(currentToken.getTip()=="rParen"){
                                        nextToken();
                                        if(currentToken.getTip()=="Semicolon"){
                                            nextToken();
                                            return true;
                                        }
                                        else{
                                            return false;
                                        }
                                    }
                                    else{
                                        return false;
                                    }
                                }
                                else{
                                    return false;
                                }
                            }
                            else{
                                return false;
                            }
                            
                        }
                        else{
                            return false;
                        }
                    }

                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

            return false;
        }

        bool POINT(){
            if(currentToken.getTip()=="lParen"){
                nextToken();
                if(O()){
                    

                    if(currentToken.getTip()=="Vejica"){
                        nextToken();
                        if(O()){
                           
                            

                            if(currentToken.getTip()=="rParen"){
                                //nextToken();
                                return true;
                            }
                            else{
                                return false;
                            }
                            
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
        }
       
        bool LINE(){
            if(currentToken.getLexem()=="line"){
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="Vejica"){
                        nextToken();
                        if(currentToken.getTip()=="Variable" || POINT()){
                            nextToken();
                            if(currentToken.getTip()=="rParen"){
                                        nextToken();
                                        if(currentToken.getTip()=="Semicolon"){
                                            nextToken();
                                            return true;
                                        }
                                        else{
                                            return false;
                                        }
                                    }
                                    else{
                                        return false;
                                    }
                            
                        }
                        else{
                            return false;
                        }
                    }

                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

            return false;
        }

        bool CIRCLE(){
           if(currentToken.getLexem()=="circle"){
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="Vejica"){
                            
                        nextToken();
                        
                        if(O()){

                            if(currentToken.getTip()=="rParen"){
                                        nextToken();
                                        if(currentToken.getTip()=="Semicolon"){
                                            nextToken();
                                            return true;
                                        }
                                        else{
                                            return false;
                                        }
                                    }
                                    else{
                                        return false;
                                    }
                            
                        }
                        else{
                            return false;
                        }
                    }

                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

            return false;
        }

        bool ELIPSE(){
             if(currentToken.getLexem()=="elipse"){
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="Vejica"){
                        nextToken();
                        if(O()){
                        
                            if(currentToken.getTip()=="Vejica"){
                                nextToken();
                                if(O()){
                                    
                                    if(currentToken.getTip()=="rParen"){
                                        nextToken();
                                        if(currentToken.getTip()=="Semicolon"){
                                            nextToken();
                                            return true;
                                        }
                                        else{
                                            return false;
                                        }
                                    }
                                    else{
                                        return false;
                                    }
                                }
                                else{
                                    return false;
                                }
                            }
                            else{
                                return false;
                            }
                            
                        }
                        else{
                            return false;
                        }
                    }

                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

            return false;
        }
        
        bool BOX(){
             if(currentToken.getLexem()=="box"){
                nextToken();
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="Vejica"){
                        nextToken();
                        if(currentToken.getTip()=="Variable" || POINT()){
                            nextToken();
                            if(currentToken.getTip()=="rParen"){
                                        nextToken();
                                        if(currentToken.getTip()=="Semicolon"){
                                            nextToken();
                                            return true;
                                        }
                                        else{
                                            return false;
                                        }
                                    }
                                    else{
                                        return false;
                                    }
                            
                        }
                        else{
                            return false;
                        }
                    }

                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

            return false;
        }

        bool TREEBINSIGN(){

            if(currentToken.getLexem()=="tree"){
                
                nextToken();
          
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="rParen"){
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                nextToken();
                                return true;
                            }
                            else{
                                 return false;
                                }   
                        }
                           
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }

            }
            else if(currentToken.getLexem()=="bin"){
                
                nextToken();
          
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="rParen"){
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                nextToken();
                                return true;
                            }
                            else{
                                 return false;
                                }   
                        }
                           
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }

            }
            
            else if(currentToken.getLexem()=="sign"){
                
                nextToken();
          
                if(currentToken.getTip()=="lParen"){
                    nextToken();
                    if(currentToken.getTip()=="Variable" || POINT()){
                        nextToken();
                        if(currentToken.getTip()=="rParen"){
                            nextToken();
                            if(currentToken.getTip()=="Semicolon"){
                                nextToken();
                                return true;
                            }
                            else{
                                 return false;
                                }   
                        }
                           
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
            return false;


        }
    
        bool VAR(){
            if(currentToken.getLexem()=="var"){
                
                nextToken();
               if(currentToken.getTip()=="Variable"){
                   nextToken();
                    if(currentToken.getTip()=="Assignment operator"){
                    nextToken();
                    if(O()){
                        
                        
                        

                        if(currentToken.getTip()=="Semicolon"){
                            
                            nextToken();
                            return true;
                        }
                        else{
                            return false;
                        }

                        
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
               }
               else{
                   return false;
               }
            }
            else if(currentToken.getLexem()=="point"){
                
                nextToken();
               if(currentToken.getTip()=="Variable"){
                   nextToken();
                    if(currentToken.getTip()=="Assignment operator"){
                    nextToken();
                    if(POINT()){
                        
                        nextToken();
                        
                        if(currentToken.getTip()=="Semicolon"){
                            
                            nextToken();
                            return true;
                        }
                        else{
                            return false;
                        }

                        
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
               }
             
            }

            else if(currentToken.getLexem()=="list"){
                
               nextToken();
               if(currentToken.getTip()=="manj"){
                   
                   nextToken();
                   if(currentToken.getLexem()=="var"){
                       nextToken();
                       if(currentToken.getTip()=="vec"){
                           
                           nextToken();
                           if(currentToken.getTip()=="Variable"){
                              
                               
                               nextToken();
                               if(currentToken.getTip()=="Assignment operator"){

                                   nextToken();
                                   if(currentToken.getTip()=="lParen"){

                                        
                                
                                        nextToken();
                                        if(VCC()){
                                             
                                             
                                            if(currentToken.getTip()=="rParen"){
                                                nextToken();
                                                if(currentToken.getTip()=="Semicolon"){
                                                    nextToken();
                                                    return true;
                                                }
                                                else{
                                                    return false;
                                                }

                                            }
                                            else{
                                                return false;
                                            }

                                        }
                                        else{
                                            return false;
                                        }

                                   
                                    }
                                    else{
                                        return false;
                                    }
                               }
                               else{
                                   return false;
                               }

                           }
                           else{
                               return false;
                           }
                       }
                       else{
                           return false;
                       }

                   }
                   else if(currentToken.getLexem()=="point"){
                       nextToken();

                       if(currentToken.getTip()=="vec"){
                           
                           nextToken();
                           if(currentToken.getTip()=="Variable"){
                              
                               
                               nextToken();
                               if(currentToken.getTip()=="Assignment operator"){

                                   nextToken();
                                   if(currentToken.getTip()=="lParen"){

                                        
                                
                                        nextToken();
                                        if(PCC()){
                                             
                                             
                                            if(currentToken.getTip()=="rParen"){
                                                nextToken();
                                                if(currentToken.getTip()=="Semicolon"){
                                                    nextToken();
                                                    return true;
                                                }
                                                else{
                                                    return false;
                                                }

                                            }
                                            else{
                                                return false;
                                            }

                                        }
                                        else{
                                            return false;
                                        }

                                   
                                    }
                                    else{
                                        return false;
                                    }
                               }
                               else{
                                   return false;
                               }

                           }
                           else{
                               return false;
                           }
                       }
                       else{
                           return false;
                       }
                   }
                   else{
                       return false;
                   }

               }
               else{
                   return false;
               }
               
                   
                   
                        
                      

            }


                 

            else{
                return false;
            }
            return false;
        }

        bool VCC(){


          

            if(currentToken.getTip()=="Variable" || currentToken.getTip()=="Float" || currentToken.getTip()=="lParen" || currentToken.getLexem()=="-"){
                
                return V()&&VCC();
            }


            else{
                return true;
            }
            
            
        }

        bool V(){
            
            if(O()){
                
                
                if(currentToken.getTip()=="Vejica"){
                    nextToken();
                    return V();
                }
                return true;
            }
            else{
                return false;
            }
        }

        bool PCC(){

             if(currentToken.getTip()=="Variable" || currentToken.getTip()=="lParen"){
                return P()&&PCC();
            }


            else{
                return true;
            }

        }
    
        bool P(){

            if(currentToken.getTip()=="Variable" || POINT()){
                nextToken();

                if(currentToken.getTip()=="Vejica"){
                    nextToken();
                    return P();
                }
                return true;
            }
            else{
                return false;
            }

        }

        bool O(){
            

            

            return T() && EE();
        }
        
        bool EE(){
            
            if(currentToken.getTip()=="Plus"){
                nextToken();
               
                return T() && EE();
            }
            else if(currentToken.getTip()=="Minus"){
                nextToken();
                return T() && EE();
            }


           
            

           
            
            else{ 
                return true;
            }
        }
       
        bool T(){
            
            return F() && TT();

        }
        
        bool TT(){

            
            if(currentToken.getLexem()=="*"){
                nextToken();
                return F() && TT();
            }
            else if(currentToken.getLexem()=="/"){
                nextToken();
                return F() && TT();
            }
            else if(currentToken.getLexem()=="^"){
                nextToken();
                return F() && TT();
            }
            else{
                return true;
            }

        }
        
        bool F(){

             

            if(currentToken.getTip()=="lParen"){
                nextToken();
                if(O() && currentToken.getTip()==("rParen")){
                    nextToken();
                    return true;
                }
                else{
                    return false;
                }
            }

            else if(currentToken.getTip()=="Variable"){
               
                nextToken();
                return true;
            }
            else if(currentToken.getTip()=="Float"){
                
                nextToken();
               
                return true;
            }

            else if(currentToken.getTip()=="Minus"){
                
                nextToken();
                if(currentToken.getTip()=="Float" || currentToken.getTip()=="Variable"){
                    nextToken();
                    return true;
                }
                else{
                    return false;
                }
            }

            else{
                return false;
            }


        }
    
    public:



        Parser(){}

        Parser(Scanner scanner){
            sc=scanner;
            currentToken = sc.nextToken();
        }



        bool Parse(){
            return E()  && currentToken.isEof();
        }


        Token getToken(){
            return currentToken;
        }

        void nextToken(){
            currentToken=sc.nextToken();
        }







};

#endif