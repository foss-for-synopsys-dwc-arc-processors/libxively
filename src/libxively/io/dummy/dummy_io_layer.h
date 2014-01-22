// Copyright (c) 2003-2014, LogMeIn, Inc. All rights reserved.
// This is part of Xively C library, it is under the BSD 3-Clause license.

#ifndef __DUMMY_IO_LAYER_H__
#define __DUMMY_IO_LAYER_H__

#include "xi_layer.h"

#ifdef __cplusplus
extern "C" {
#endif

layer_state_t dummy_io_layer_data_ready(
      layer_connectivity_t* context
    , const void* data
    , const layer_hint_t hint );

layer_state_t dummy_io_layer_on_data_ready(
      layer_connectivity_t* context
    , const void* data
    , const layer_hint_t hint );

layer_state_t dummy_io_layer_close(
    layer_connectivity_t* context );

layer_state_t dummy_io_layer_on_close(
    layer_connectivity_t* context );

layer_t* connect_to_endpoint(
      layer_t* layer
    , const char* address
    , const int port );

#ifdef __cplusplus
}
#endif

#endif // __DUMMY_IO_LAYER_H__
