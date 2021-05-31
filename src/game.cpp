#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include "messages.h"
#include "card.h"
#include "player.h"
#include "deck.h"
#include "game.h"

using namespace std;





/*
            -----------------CONSTRUCTOR AND DESTRUCTOR-------------------
            ♦ DeckMaster(): creates a new object of type DeckMaster
            ♦ ~DeckMaster(): destroys object of type DeckMaster
    */
    DeckMaster::DeckMaster(){
        UtilsFunctions *utils = new UtilsFunctions();
        this->Welcome();
        string name;
        cout<<endl<< "Enter your nickname: ";
        cin>>name;
        this->player = new Player(name);
        this->computer = new Player("Computer");
        this->deck = new Deck();
        this->roundTail = 0;
    } 
    DeckMaster::~DeckMaster(){
        this->player = NULL;
        this->computer = NULL;
        this->deck = NULL;
        this->roundTail = 0;
    }

     /*
        -------------------ACCESSORS-------------------
        
                        GETTERS
            ♦ GetPlayer(): returns human player
            ♦ GetComputer(): returns the machine player
            ♦ GetDeck(): returns the deck
            ♦ GetRoundsTail(): returns the roundstail
    */
    Player* DeckMaster::GetPlayer(){
        return this->player;
    }
    Player* DeckMaster::GetComputer(){
        return this->computer;
    }
    Deck* DeckMaster::GetDeck(){
        return this->deck;
    }
    int DeckMaster::GetRoundsTail(){
        return this->roundTail;
    }

     /*
        ---------------------SETTERS---------------------
        ♦ SetPlayer(): updates the human player
        ♦ SetComputer(): updates the machine player
        ♦ SetDeck(): updates games's deck
        ♦ SetRoundsTail(): updates the roundstail
    */

    void DeckMaster::SetPlayer(Player* player){
        this->player = player;
    }
    void DeckMaster::SetComputer(Player* computer){ 
        this->computer = computer;
    }
    void DeckMaster::SetDeck(Deck* deck){
        this->deck = deck;
    }
    void DeckMaster::SetRoundsTail(int rounds){
        this->roundTail = rounds;
    }


    /*
        ---------------------METHODS---------------------
        ♦ Welcome(): prints welcome message
        ♦ InitGame(): Initializes the by generating the Deck
        ♦ PrintStatistics(): prints games's statistics
        ♦ PlayRound(): Starts a new round
    */

    void DeckMaster::Welcome(){
        UtilsFunctions *utils;
        utils->Welcome();
    }
    void DeckMaster::InitGame(){}
    void DeckMaster::PrintStatistics(){}
    bool DeckMaster::PlayRound(){}