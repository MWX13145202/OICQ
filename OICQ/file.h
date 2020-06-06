#ifndef FILE_H
#define FILE_H


#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "usrList.h"

int openFile(const char *pathName,int flags);
void saveUsrListToFile(const UsrList *list);
void getUsrListFromFile(UsrList *list);

#define USR_INFO "./usr.dat"

#endif
