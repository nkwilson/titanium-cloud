/* 
 * Copyright (c) 2013-2015, Wind River Systems, Inc. 
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

#ifndef _AVP_ETHDEV_H_
#define _AVP_ETHDEV_H_

#include <stdint.h>

#include <rte_version.h>

#ifndef RTE_VERSION_NUM
/* only available in >= 1.7.0 */
#define RTE_VERSION_NUM(a,b,c,d) ((a) << 24 | (b) << 16 | (c) << 8 | (d))
#endif

#define WRS_AVP_MAX_RX_BURST 64
#define WRS_AVP_MAX_TX_BURST 64
#define WRS_AVP_MAX_MAC_ADDRS 1
#define WRS_AVP_MIN_RX_BUFSIZE ETHER_MIN_LEN
#define WRS_AVP_MAX_RX_PKTLEN  ETHER_MAX_LEN


#if RTE_VERSION < RTE_VERSION_NUM(1,7,0,0)
/**
 * The driver initialization function for the AVP ethernet devices
 * Invoked once at EAL start time.
 * @return
 *   0 on success
 */
extern int wrs_avp_pmd_init(void);
#endif

#endif /* _AVP_ETHDEV_H_ */
