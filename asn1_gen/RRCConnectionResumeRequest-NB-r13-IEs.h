/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asn1_defs/NBIOT-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionResumeRequest_NB_r13_IEs_H_
#define	_RRCConnectionResumeRequest_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ResumeIdentity-r13.h"
#include "ShortMAC-I.h"
#include "EstablishmentCause-NB-r13.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionResumeRequest-NB-r13-IEs */
typedef struct RRCConnectionResumeRequest_NB_r13_IEs {
	ResumeIdentity_r13_t	 resumeID_r13;
	ShortMAC_I_t	 shortResumeMAC_I_r13;
	EstablishmentCause_NB_r13_t	 resumeCause_r13;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeRequest_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeRequest_NB_r13_IEs_H_ */
#include <asn_internal.h>