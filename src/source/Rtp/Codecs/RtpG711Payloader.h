/*******************************************
G711 RTP Payloader include file
*******************************************/
#ifndef __KINESIS_VIDEO_WEBRTC_CLIENT_RTPG711PAYLOADER_H
#define __KINESIS_VIDEO_WEBRTC_CLIENT_RTPG711PAYLOADER_H

#pragma once

#ifdef  __cplusplus
extern "C" {
#endif

// For tight packing
#pragma pack(push, include_i, 1) // for byte alignment

STATUS createPayloadForG711(UINT32, PBYTE, UINT32, PBYTE, PUINT32, PUINT32, PUINT32);
STATUS depayG711FromRtpPayload(PBYTE, UINT32, PBYTE, PUINT32, PBOOL);

#pragma pack(pop, include_i)

#ifdef  __cplusplus

}
#endif
#endif //__KINESIS_VIDEO_WEBRTC_CLIENT_RTPG711PAYLOADER_H
