#!/bin/bash
make

test_pgmEcho_noFilesProvided(){
    output=$(./pgmEcho)
    if [ "$output" = "Usage: ./pgmEcho inputImage.pgm outputImage.pgm" ]; then
        echo "PASSED pgmEcho UsageStringTest"
    else
        echo "FAILED pgmEcho UsageStringTest"
    fi;
}

test_pgmComp_noFilesProvided(){
    output=$(./pgmComp)
    if [ "$output" = "Usage: ./pgmComp inputImage.pgm inputImage.pgm" ]; then
        echo "PASSED pgmComp UsageStringTest"
    else
        echo "FAILED pgmComp UsageStringTest"
    fi;
}

test_pgmb2a_noFilesProvided(){
    output=$(./pgmb2a)
    if [ "$output" = "Usage: ./pgmb2a inputImage.pgm outputImage.pgm" ]; then
        echo "PASSED pgmb2a UsageStringTest"
    else
        echo "FAILED pgmb2a UsageStringTest"
    fi;
}

test_pgma2b_noFilesProvided(){
    output=$(./pgma2b)
    if [ "$output" = "Usage: ./pgma2b inputImage.pgm outputImage.pgm" ]; then
        echo "PASSED pgmb2a UsageStringTest"
    else
        echo "FAILED pgmb2a UsageStringTest"
    fi;
}

test_pgmReduce_noFilesProvided(){
    output=$(./pgmReduce)
    if [ "$output" = "Usage: ./pgmReduce inputImage.pgm reduction_factor outputImage.pgm" ]; then
        echo "PASSED pgmReduce UsageStringTest"
    else
        echo "FAILED pgmReduce UsageStringTest"
    fi;
}

test_pgmEcho_noFilesProvided
test_pgmComp_noFilesProvided
test_pgmb2a_noFilesProvided
test_pgma2b_noFilesProvided
test_pgmReduce_noFilesProvided
make clean
