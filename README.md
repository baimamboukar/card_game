# CARD GAME USING OOP APPROACH WITH C++

## <center> ENTITIES OF THE GAME <center>

<h3>Player</h3>: The player is characterized by his name, number of wins, number of loses, high score and hand. He can change his hand of cards as many time as he wants until he is satisfied with the given hand of cards.<br/>
<h3>Card</h3>: Each card is characterized by its name, worth and suit (from where the colour can also be deduced).<br/>
<h3>Deck</h3>: the deck is the collection that contains all the 52 cards of the game. We can either pick a card inside the deck or a hand (set of 5 cards).<br/>

## HOW THE GAME WORKS
This is how the game works (logically):
o It requires a player (the user) and the computer. The game starts when the player is satisfied with the hand of 5 cards that have been randomly picked from the deck and given to him. 
o The user has the possibility to change the first 5 cards that have been given to him to a new hand that is taken from the deck.  The computer’s cards are only displayed only once the player has made the choice to keep his cards (to avoid cheating).
o Once both players have their hands ready, their hands are compared and the one with the highest total value of points is announced as the winner.

  
  ##DEMO
  ###MENU
  After running opening the game, this main interface will be displayed
![menu](https://user-images.githubusercontent.com/49169158/123787823-2f685d80-d8d3-11eb-9edb-169aeb5e842f.png)

  ###GAME RULES
  The user has the possibility to read the game rules before playing. If he chooses option 4, he/she will see this following interface
  ![how to play](https://user-images.githubusercontent.com/49169158/123787980-60489280-d8d3-11eb-8baa-0e790cb1b2f7.png)
  
  ###GALEERY
  The user can also view the gallery (deck) to understand the worth and suite of each cards with the option 5.
  ![gallery](https://user-images.githubusercontent.com/49169158/123788097-83734200-d8d3-11eb-915d-53cccc70bd78.png)

  ###GAME
  If the player choses the first option, he will be greeted with an interface demanding his nickname. Once validated, the game starts.
  ![name](https://user-images.githubusercontent.com/49169158/123788200-a56cc480-d8d3-11eb-98d0-86c20703ad49.png)

  ###CHANGING HAND
  when the game starts 5 cards are picked from the deck and given to the player. But if he/she is not satisfied, she/he can change his cards
  ![cards](https://user-images.githubusercontent.com/49169158/123788306-c33a2980-d8d3-11eb-8829-b5ef0124d27c.png)
  
  ###COMPUTER'S HAND
  After he is satisfied with his hand, the computer’s cards are now picked randomly from the deck and revealed to the player.
  ![change](https://user-images.githubusercontent.com/49169158/123788357-cd5c2800-d8d3-11eb-9311-6008a087548a.png)

    ###ROUND
  After that, the round 1 starts. Each pair of cards (PLAYER’S CARD, COMPUTER’S CARD) are compared. And the total values of the cards are also compared. If the total value of the player’s hand is greater than that of the computer, the player wins otherwise he loses the round. But a draw round can also occur if the hand’s values are equal.
  ![yw](https://user-images.githubusercontent.com/49169158/123788530-098f8880-d8d4-11eb-86b5-60fb99a82417.png)
  
  ###WINNER
  At the last round, the final winner is announced.
  ![vict](https://user-images.githubusercontent.com/49169158/123788619-2461fd00-d8d4-11eb-8f6b-1a07a5847b28.png)



