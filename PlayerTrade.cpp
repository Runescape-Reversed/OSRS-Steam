// I'll split these in to two parts.
// One, being this one, coming straight from ida with some names renamed.
__int64 playerTrade()
{
  __int64 result; // rax

  result = qword_14189C5A0 - tradeString;       // qword_14189C5A0 is unknown for now, but i assume that it's making a strlen check. check below for example
  if ( qword_14189C5A0 - tradeString > 1 )      // replace the if statement with if ( strlen( tradeString ) > 1 )
  {
    if ( tradeString )                          // check if tradeString is valid, if a player has requested a trade.
      result = sub_14027F460(player::getName__, tradeString);// player::getName is assumed, but not confirmed.
  }
  return result;
}

// And two, my own version of it.

// Notice that i changed it to a bool val instead of an int 64 val.
bool __stdcall playerTrade()
{
	bool isValid = ( strlen( tradeString ) > 1 );
	
	if( isValid )
	{
		if( tradeString )
			return true;
	}
	
	return false;
}
