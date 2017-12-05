#ifndef STREAM_FILE_H
#define STREAM_FILE_H

#ifdef __cplusplus
extern "C"{

#include <string.h>
#include <stdio.h>

const char file_name[255] = "/tmp/snapstream.pcm";

extern FILE *snap_stream;

}
#endif /* __cplusplus */

#endif

