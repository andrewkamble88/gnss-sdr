/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _SeqOfOTD_FirstSetMsrs_H_
#define _SeqOfOTD_FirstSetMsrs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct OTD_MeasurementWithID;

    /* SeqOfOTD-FirstSetMsrs */
    typedef struct SeqOfOTD_FirstSetMsrs
    {
        A_SEQUENCE_OF(struct OTD_MeasurementWithID)
        list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SeqOfOTD_FirstSetMsrs_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SeqOfOTD_FirstSetMsrs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OTD-FirstSetMsrs.h"

#endif /* _SeqOfOTD_FirstSetMsrs_H_ */
#include <asn_internal.h>
