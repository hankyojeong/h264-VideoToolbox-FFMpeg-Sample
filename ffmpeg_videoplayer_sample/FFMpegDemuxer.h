//
//  FFMpegDemuxer.h
//  ffmpeg_videoplayer_sample
//
//  Created by HanGyo Jeong on 27/10/2019.
//  Copyright © 2019 HanGyoJeong. All rights reserved.
//

#ifndef FFMpegDemuxer_h
#define FFMpegDemuxer_h

#include <stdio.h>
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"

typedef struct{
    uint8_t *nal_buf;
    int nal_size;
}NAL_UNIT;

int init_ffmpeg_config(const char *input_file_name, int format);

typedef struct AVCodecParameters AVCodecParameters;
AVCodecParameters* get_codec_parameters(void);


#endif /* FFMpegDemuxer_h */
