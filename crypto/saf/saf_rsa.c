/* ====================================================================
 * Copyright (c) 2016 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES
 * LOSS OF USE, DATA, OR PROFITS OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */


#include <openssl/gmsaf.h>
#include <openssl/gmapi.h>
#include "saf_lcl.h"


/* 7.3.16 */
int SAF_GenRsaKeyPair(void *hAppHandle,
	unsigned char *pucContainerName,
	unsigned int uiContainerNameLen,
	unsigned int uiKeyBits,
	unsigned int uiKeyUsage,
	unsigned int uiExportFlag)
{
	return SAR_NotSupportYetErr;
}

/* 7.3.17 */
int SAF_GetPublicKey(
	void *hAppHandle,
	unsigned char *pucContainerName,
	unsigned int uiContainerNameLen,
	unsigned int uiKeyUsage,
	unsigned char *pucPublicKey,
	unsigned int *puiPublicKeyLen)
{
	return SAR_NotSupportYetErr;
}

/* 7.3.18 */
int SAF_RsaSign(
	void *hAppHandle,
	unsigned char *pucContainerName,
	unsigned int uiContainerNameLen,
	unsigned int uiHashAlgoType,
	unsigned char *pucInData,
	unsigned int uiInDataLen,
	unsigned char *pucSignature,
	unsigned int *puiSignatureLen)
{
	return SAR_NotSupportYetErr;
}

/* 7.3.19 */
int SAF_RsaSignFile(
	void *hAppHandle,
	unsigned char *pucContainerName,
	unsigned int uiContainerNameLen,
	unsigned int uiHashAlgoType,
	unsigned char *pucFileName,
	unsigned char *pucSignature,
	unsigned int *puiSignatureLen)
{
	return SAR_OK;
}

/* 7.3.20 */
int SAF_RsaVerifySign(
	unsigned int uiHashAlgoType,
	unsigned char *pucPublicKey,
	unsigned int uiPublicKeyLen,
	unsigned char *pucInData,
	unsigned int uiInDataLen,
	unsigned char *pucSignature,
	unsigned int uiSignatureLen)
{
	return SAR_NotSupportYetErr;
}

/* 7.3.21 */
int SAF_RsaVerifySignFile(
	unsigned int uiHashAlgoType,
	unsigned char *pucPublicKey,
	unsigned int uiPublicKeyLen,
	unsigned char *pucFileName,
	unsigned char *pucSignature,
	unsigned int uiSignatureLen)
{
	return SAR_OK;
}

/* 7.3.22 */
int SAF_VerifySignByCert(
	unsigned int uiHashAlgoType,
	unsigned char *pucCertificate,
	unsigned int uiCertificateLen,
	unsigned char *pucInData,
	unsigned int uiInDataLen,
	unsigned char *pucSignature,
	unsigned int uiSignatureLen)
{
	return SAR_OK;
}

