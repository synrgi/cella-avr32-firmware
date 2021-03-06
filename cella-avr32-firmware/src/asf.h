/**
 * \file
 *
 * \brief Autogenerated API include file for the Atmel Software Framework (ASF)
 *
 * Copyright (c) 2012 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef ASF_H
#define ASF_H

/*
 * This file includes all API header files for the selected drivers from ASF.
 * Note: There might be duplicate includes required by more than one driver.
 *
 * The file is automatically generated and will be re-written when
 * running the ASF driver selector tool. Any changes will be discarded.
 */

// From module: ADC - Analog to Digital Converter
#include <adc.h>

// From module: AES - Advanced Encryption Standard
#include <aes.h>

// From module: CPU Cycle Counter
#include <cycle_counter.h>

// From module: Compiler abstraction layer and code utilities
#include <compiler.h>
#include <status_codes.h>

// From module: DMACA - DMA Controller A
#include <dmaca.h>

// From module: Delay routines
#include <delay.h>

// From module: Memory Control Access Interface
#include <ctrl_access.h>

// From module: FAT file system
#include <fat.h>
#include <file.h>
#include <fs_com.h>
#include <navigation.h>

// From module: FAT file system with POSIX API support
#include <fsaccess.h>

// From module: FLASHC - Flash Controller
#include <flashc.h>

// From module: GPIO - General-Purpose Input/Output
#include <gpio.h>

// From module: Generic board support
#include <board.h>

// From module: INTC - Interrupt Controller
#include <intc.h>

// From module: IOPORT - General purpose I/O service
#include <ioport.h>

// From module: Interrupt management - UC3 implementation
#include <interrupt.h>

// From module: MCI - MultiMedia Card Interface
#include <mci.h>

// From module: PM Power Manager- UC3 A0/A1/A3/A4/B0/B1 implementation
#include <power_clocks_lib.h>
#include <sleep.h>

// From module: Part identification macros
#include <parts.h>

// From module: PolarSSL - Small Cryptographic and SSL/TLS Library
#include <polarssl/aes.h>
#include <polarssl/arc4.h>
#include <polarssl/base64.h>
#include <polarssl/bignum.h>
#include <polarssl/bn_mul.h>
#include <polarssl/camellia.h>
#include <polarssl/certs.h>
#include <polarssl/config.h>
#include <polarssl/debug.h>
#include <polarssl/des.h>
#include <polarssl/dhm.h>
#include <polarssl/havege.h>
#include <polarssl/md2.h>
#include <polarssl/md4.h>
#include <polarssl/md5.h>
#include <polarssl/padlock.h>
#include <polarssl/rsa.h>
#include <polarssl/sha1.h>
#include <polarssl/sha2.h>
#include <polarssl/sha4.h>
#include <polarssl/ssl.h>
#include <polarssl/timing.h>
#include <polarssl/x509.h>
#include <polarssl/xtea.h>

// From module: SPI - Serial Peripheral Interface
#include <spi.h>

// From module: SPI - UC3 implementation
#include <spi_master.h>
#include <spi_master.h>

// From module: Sleep manager - UC3 implementation
#include <sleepmgr.h>
#include <uc3/sleepmgr.h>

// From module: System Clock Control - UC3 A3/A4 implementation
#include <sysclk.h>

// From module: USART - Serial interface - UC3 implementation
#include <serial.h>

// From module: USART - Universal Synchronous/Asynchronous Receiver/Transmitter
#include <usart.h>

// From module: USB Device MSC (Single Interface Device)
#include <udi_msc.h>

// From module: USB Device Stack Core (Common API)
#include <udc.h>
#include <udd.h>

// From module: USB MSC Protocol
#include <usb_protocol_msc.h>

// From module: Virtual Memory in RAM
#include <virtual_mem.h>

#endif // ASF_H
