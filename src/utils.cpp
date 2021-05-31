#include "utils.h"
#include "card.h"
#include "color.h"
#include "messages.h"
#include<string>
#include<iostream>
using namespace std;


string UtilsFunctions::getCardName(string suite, int worth){
    switch(worth){
        case 1:
            return ("ACE_OF_" + suite);
            break;
        case 11:
            return ("JACK_OF_" + suite);
            break;
        case 12:
            return ("QUEEN_OF_" + suite);
            break;
        case 13:
            return ("KING_OF_" + suite);
            break;
        default:
            return (worth + "_OF_" + suite);
    }
}

void UtilsFunctions::PrintCard(Card *card){
    Messages *messages = new Messages();
    string suite = card->GetSuite();
    string name = card->GetName();
    
    if(suite == "Diamond" || suite == "Heart"){
        std::cout<< red << name<< endl;
        std::cout<< red << messages->Card();
    }
    else{
        std::cout<< blue << name << endl;
        std::cout<< blue << messages->Card();
    }

}
    void UtilsFunctions::Welcome(){
        Messages *messages = new Messages();
        string _welcome = messages->DeckMaster();
        cout<<green<<_welcome;
        cout<<"**************************************************************";
        cout<<"*******************************************************";
    }

    void UtilsFunctions::CleanConsole(){
        system("cls");
        this->Welcome();
    }


    bool UtilsFunctions::Menu(){
        int choice;
        Messages *msg = new Messages();
        constexpr auto menu = R"(
            1-Start a new Game
            2-Game Rules
            3-How to Play?
            4-Exit
            (Press the keep corresponding to you choice)  
        )";

        switch(choice){
            case 1:
                return true;
                break;
            case 2:
                cout<<msg->HowToplay();
                return false;
                break;
            case 3:
                cout<<msg->HowToplay();
                return false;
                break;
            case 4:
                exit(0);
                return false;
                break;
        }
    }

