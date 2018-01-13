#pragma once

#include <rtl-sdr.h>
#include <pthread.h>
#include <libusb.h>

#ifdef __cplusplus
extern "C" {
#endif

struct RtlSdr {
};
void RtlSdr_init(struct RtlSdr* radio);
void RtlSdr_end(struct RtlSdr* radio);

#ifdef __cplusplus
}
#endif