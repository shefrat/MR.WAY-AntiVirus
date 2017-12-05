/* remove example: remove myfile.txt */
#include <stdio.h>

int main ()
{
  if( remove( "ab.txt" ) != 0 )
    perror( "Error deleting file" );
  else
    puts( "File successfully deleted" );
  return 0;
}
