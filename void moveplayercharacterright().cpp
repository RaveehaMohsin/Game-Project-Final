void moveplayercharacterright()
{  
    char right = getCharAtxy(playerX+3 , playerY);
    if (right == ' ')
    {
        eraseplayer();
        playerX = playerX + 1; 
        playercharacter();
    }
    else if(right == '@')
    {
        eraseplayer();
        playerX = playerX + 1; 
        playercharacter();
        score = score + 10;
        printScore( score);
    }

}

void moveplayercharacterleft()
{  
    char left = getCharAtxy(playerX-1, playerY);
    if (left == ' ')
    {
        eraseplayer();
        playerX = playerX - 1; 
        playercharacter();
    }
    else if(left == '%')
    {
        eraseplayer();
        playerX = playerX - 1; 
        playercharacter();
        score = score + 10;
        printScore( score);
    }

}