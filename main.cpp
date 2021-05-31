#include <iostream>
#include<string>
#include<ostream>
#include<sstream>
#include "color.h"
#include "card.h"
#include "messages.h"
#include "utils.h"
#include "game.h"

using namespace std;


int main()
{
    bool feedback;
    DeckMaster *Game = new DeckMaster();
    UtilsFunctions *utils = new UtilsFunctions();

    utils->Menu();
    if(feedback){
        Game->Welcome();
    }

    
    
    system("pause > 0");
    return 0;
}
