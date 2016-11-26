#ifndef _MYCALLS_H_
#define _MYCALLS_H_

#include <sys/cdefs.h>

int semcreate(int);
int semdelete(int);
int semdown(int);
int semup(int);

#endif