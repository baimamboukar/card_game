#pragma once
#include<string>
#include<sstream>
#include "card.h"


class UtilsFunctions{

public:
    string getCardName(string suite, int worth);
    void PrintCard(Card *card);
    void Welcome();
    void CleanConsole();
    bool Menu();
};