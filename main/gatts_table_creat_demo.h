/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Attributes State Machine */
enum
{
    IDX_SVC,

    IDX_CHAR_SCORE,
    IDX_CHAR_VAL_SCORE,

    IDX_CHAR_FLAG,
    IDX_CHAR_VAL_FLAG,
    
    IDX_CHAR_FLAG_SIMPLE_READ,
    IDX_CHAR_VAL_FLAG_SIMPLE_READ,
    
    IDX_CHAR_FLAG_MD5,
    IDX_CHAR_VAL_FLAG_MD5,

    IDX_CHAR_FLAG_WRITE_ANYTHING,
    IDX_CHAR_VAL_FLAG_WRITE_ANYTHING,

    IDX_CHAR_FLAG_WRITE_ASCII,
    IDX_CHAR_VAL_FLAG_WRITE_ASCII,

    IDX_CHAR_FLAG_WRITE_HEX,
    IDX_CHAR_VAL_FLAG_WRITE_HEX,

    IDX_CHAR_FLAG_SIMPLE_WRITE2_READ,
    IDX_CHAR_VAL_FLAG_SIMPLE_WRITE2_READ,

    IDX_CHAR_FLAG_SIMPLE_WRITE2,
    IDX_CHAR_VAL_FLAG_SIMPLE_WRITE2,

    IDX_CHAR_FLAG_BRUTE_WRITE,
    IDX_CHAR_VAL_FLAG_BRUTE_WRITE,

    IDX_CHAR_FLAG_READ_ALOT,
    IDX_CHAR_VAL_FLAG_READ_ALOT,
    
    IDX_CHAR_A,
    IDX_CHAR_VAL_A,
    IDX_CHAR_CFG_A,

    IDX_CHAR_C,
    IDX_CHAR_VAL_C,

   
    HRS_IDX_NB,
};
