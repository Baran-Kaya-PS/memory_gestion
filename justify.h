//
// Created by Baran on 12/23/2024.
//
/*
 * justify file format a quote to justify it
 * how it should work ?
 * 1. We get the text
 * 2. If the text exist => the algorithm continues
 * 3. If the text is not justified we continue
 * 4. Apply algorithms to justify the text
 * 5. Return the text
 */
#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#ifndef MEMORY_GESTION_JUSTIFY_H
#define MEMORY_GESTION_JUSTIFY_H
#endif //MEMORY_GESTION_JUSTIFY_H
/* #define EOF = '\0' */ // replaced by EOF Macro inside stdio.h