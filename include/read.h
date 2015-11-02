#ifndef __READ_H__
#define __READ_H__

#include "all_stdlib.h"

/**
   read all file content one time
 */
char * readAll(char *filename);
/**
   read large file char by char
 */
File * readChar(File *file, char *m_res);

#endif /* __READ_H__ */
