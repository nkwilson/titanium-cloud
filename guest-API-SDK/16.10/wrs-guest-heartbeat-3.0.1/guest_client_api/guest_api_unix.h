/*
 * Copyright (c) 2013-2016, Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors may be
 * used to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __GUEST_API_UNIX_H__
#define __GUEST_API_UNIX_H__

#include "guest_api_types.h"

#ifdef __cplusplus
extern "C" {
#endif

// ****************************************************************************
// Guest API Unix - Connect
// ========================
extern GuestApiErrorT guest_api_unix_connect( int s, char* address );
// ****************************************************************************

// ****************************************************************************
// Guest API Unix - Send
// =====================
extern GuestApiErrorT guest_api_unix_send( int s, void* msg, int msg_size );
// ****************************************************************************

// ****************************************************************************
// Guest API Unix - Receive
// ========================
extern GuestApiErrorT guest_api_unix_receive(
        int s, void* msg_buf, int msg_buf_size, int* msg_size );
// ****************************************************************************

// ****************************************************************************
// Guest API Unix - Open
// =====================
extern GuestApiErrorT guest_api_unix_open( int* s );
// ****************************************************************************

// ****************************************************************************
// Guest API Unix - Close
// ======================
extern GuestApiErrorT guest_api_unix_close( int s );
// ****************************************************************************

#ifdef __cplusplus
}
#endif

#endif /* __GUEST_API_UNIX_H__ */
