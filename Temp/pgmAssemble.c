#include <stdio.h>
#include <stdlib.h>
#include "pgmCheckingValue.h"
#include "pgmErrors.h"
#include "pgmRead.h"
#include "pgmWrite.h"
#include <math.h>

int main(int argc, char **argv){
  // Check argument count supplied is correct
  int code = checkArgsErrorsForAssemble(argc, argv[0]);
  //int isASCII=0;
  if (code!=999){
    // If not, terminate with error code
    return code;}

  //char *outputImageName = argv[1];
  int outputImageWidth = atoi(argv[2]);
  int outputImageHeight = atoi(argv[3]);

  // initialise a 2d array of all coordinates and assign 0 to the values
  unsigned char map[outputImageHeight][outputImageWidth];
  memset(map, 0, sizeof(unsigned char));

  for (int j=0; j<outputImageHeight; j++){
    for (int i=0; i<outputImageWidth; i++){
      map[j][i] = 0;
    }
  }
  
  // for (int i=4; i<argc; i=i+3){
  //   FileInfo *fileValues = initialisationOfReadFileStruct();
  // 	FILE *inputFile = fopen(argv[i+2], "r");
  //   code = readFile(argv[i+2],fileValues, inputFile);
  // 	if (code!=0){
  // 		return code;}
  //
  //   long nImageBytes = fileValues->width * fileValues->height * sizeof(unsigned char);
  // 	// Read image data based on the magicNumber
  //   // initialise the two row, column
  //   int inputRowStart = atoi(argv[i]);
  //   int inputRowEnd = inputRowStart + fileValues->height;
  //   int inputColumnStart = atoi(argv[i+1]);
  //   int inputColumnEnd = inputColumnStart + fileValues->width;
  //
  // 	if (*(fileValues->magic_Number) == MAGIC_NUMBER_ASCII_PGM){
  // 	   code = readImageDataAssembly(fileValues, nImageBytes, inputFile, argv[i+2], inputRowStart, inputRowEnd, inputColumnStart, inputColumnEnd, map);
  //    }
  // 	// else if (*(fileValues->magic_Number) == MAGIC_NUMBER_RAW_PGM){
  // 	// 	code = readImageDataBinaryAssembly(fileValues, nImageBytes, inputFile, argv[i+2]);}
  // 	// Check if successfully written imageData
  // 	if (code !=0){
  // 		return code;}
  // 	closeTheFile(inputFile);

    for (int j=0; j<outputImageHeight; j++){
      for (int i=0; i<outputImageWidth; i++){
        printf("Row %i Column %i Value %d \n", i, j, map[j][i]);
      }
    }

  // write the file using the map
}
