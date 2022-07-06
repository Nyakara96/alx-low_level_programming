#include"main.h"
/**
 *  _isalpha-checks for letters
 *  @c-registers characters
 *  Return:Reurns either 0 or 1 
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
return(1);
else
return(0);
}
