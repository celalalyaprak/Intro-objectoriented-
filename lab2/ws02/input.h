#ifndef INPUT_H
#define INPUT_H

#include "dma.h"  // Contact yapısının bulunduğu dosya dahil ediliyor

int getInt();
int getInt(int min, int max);
bool getInt(int& ref, int min, int max);


#endif // INPUT_H
