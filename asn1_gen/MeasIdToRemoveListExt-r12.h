/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasIdToRemoveListExt_r12_H_
#define	_MeasIdToRemoveListExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId-v1250.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasIdToRemoveListExt-r12 */
typedef struct MeasIdToRemoveListExt_r12 {
	A_SEQUENCE_OF(MeasId_v1250_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToRemoveListExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToRemoveListExt_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdToRemoveListExt_r12_H_ */
#include <asn_internal.h>