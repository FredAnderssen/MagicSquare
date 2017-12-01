#include "DivLib.h"
#include "myIOLib.h"

void printTxtFile(char* filename)
{
  FILE *f;
      char c;
      f=fopen(filename,"rt");

      while((c=fgetc(f))!=EOF){
          printf("%c",c);
      }
      fclose(f);
}

void prntMenu(void)
{
  char choice = 0;
  do {
  printf("\n\nChoose an option:\n");
  printf("1 - Write in an Matrix manually\n");
  printf("2 - SAve current MAtrix to textfile\n");
  printf("3 - Get an  MAtrix from an textfile\n");
  printf("4 - Play FYLLA I SPEL \n");
  printf("0 - Exit program\n\n");
  choice = getInteger("Your choice: ");
  Menu(choice);

} while (choice != 0);

}

void Menu(int choice)
{
  switch (choice) {
    case 1:
      getMatrix();
      //test MS
      //TODO pekare matrix så det blir i två func
      break;
    case 2:

    case 3:

    case 4:

    default:
      break;

  }
}















void getMatrix(void)
{
  int matrix[SIZE][SIZE];
  //temp
  printf("\n Enter 16's numbers for your matrix: ");

  for(int row = 0; row < SIZE; row++)
  {
    for(int col = 0; col < SIZE; col++)
      scanf("%x", &matrix[row][col]);
  }

  prntMatrix(matrix);
  getchar();

}

void prntMatrix(int matrix[][SIZE])
{
  for(int row = 0; row < SIZE; row++)
  {
    printf("\n");
    for(int col = 0; col < SIZE; col++)
      printf("\t %x", matrix[row][col]);
  }



}

/*
bool diaTest(row, col, totalSum)
{
  int sum = 0;
  totalSum
  for(row = 0; row < size; row++) {
    for(col = 0; col < size; col++) {
      if(row == col)
        sum += matrix[row][col];
    }
  }

  if sum == 30
    diaTest = TRUE;
  else
    diaTest = FALSE;

  return diaTest;
}

bool rowTest(int sum, int matrix[][])
{
  int sum1 = 0;
  int result = Rött;

  for(row = 0;row < size; row++)
  {
    for(col = 0; col < size; col++)
    {
      sum1 += matrix[row][col];

      if(sum1 == sum)
        result = Grönt;
    }
    if(sum1 != sum) {
      result = Rött;
      break;}
  }
  return result;
}

void colTest()
{
//something similiar here like rowTest;

}


bool allTestMS(dia, row, col)
{
  if dia() = grön & row() = grön & col() = grön
  if checkNumbers() = grön
  return grön

}
*/
