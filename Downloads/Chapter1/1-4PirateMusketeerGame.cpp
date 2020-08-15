//1.4 - Pirate Musketeer Game - Dirk Henkemans - 
//Prima Publishing
#include <iostream>
#include <string>
using namespace std;      //introduces namespace std

int main( void )
//tells a pirate story
{
     int buddies;
     int afterBattle;
     string exit;
    
     cout<< "You are a pirate and are walking"
          << " along in the crime filled " << endl
          << "city of Havana (in 1789).  "
          << "How many of your pirate buddies "<<endl
          <<"do you bring along? (lots)"<<endl;
     //records the amount of friends you bring along
     cin>>buddies;
     //calculates the amount of pirates left after the battle.
     afterBattle = 1 + buddies - 10;  
     cout<< "Suddenly 10 musketeers jump out "
          << "from the local tavern and " <<endl
          << "draw their swords. "
          << "10 musketeers and 10 pirates die in the " <<endl
          << "battle.  There are only " 
          <<(buddies + 1 - 10)<< " pirates left." <<endl
          <<endl;
    cout<< "They drop 107 gold coins.  That is " 
          <<(107 / afterBattle)
           << " gold coins each." <<endl;
     cout<< "There is a big drunken brawl for the last " 
          <<(107 % afterBattle)<< " coins.";
     //pauses so you can see the result
     cin>>exit;

     return 0;
}
