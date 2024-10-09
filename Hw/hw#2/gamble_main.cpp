#include <iostream>
#include "gamble.h"

int main()
{
    Player player;
    player.setPlayer();

    GamblingGame game;
    game.gameStart(player.getPlayer());
}
