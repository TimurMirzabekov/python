#include <stdio.h>

int main()
{
  char fName[] = "file.txt"
  unsigned int num, even_numbers = 0, odd_numbers = 0;
  double even_sum, odd_sum;
  File* fIn = fopen( fName, "r" );
  if( fIn == NULL )
  {
    perror( fNme );
    return 1;
  }
  
  while( !feof( fIn ) )
     if( fscanf( fIn, "%u", &num ) > 0 )
     {
       if( num % 2 == 0 )
       {
         even_numbers++;
         even_sum += num;
       }
       else
       {
         odd_numbers++;
         odd_sum += num;
       }
     }
  fclose( fIn );
  
  printf( "even_avg=%lf\n", even_sum / even_numbers );
  printf( "odd_avg=%lf\n", odd_sum / odd_numbers);
  
  return 0;
}
    
