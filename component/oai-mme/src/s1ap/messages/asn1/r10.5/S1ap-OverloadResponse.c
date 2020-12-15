/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#include "S1ap-OverloadResponse.h"

static asn_TYPE_member_t asn_MBR_S1ap_OverloadResponse_1[] = {
    {ATF_NOFLAGS, 0,
     offsetof(struct S1ap_OverloadResponse, choice.overloadAction),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_S1ap_OverloadAction,
     0, /* Defer constraints checking to the member type */
     0, /* PER is not compiled, use -gen-PER */
     0, "overloadAction"},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_OverloadResponse_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* overloadAction at 904 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_OverloadResponse_specs_1 = {
    sizeof(struct S1ap_OverloadResponse),
    offsetof(struct S1ap_OverloadResponse, _asn_ctx),
    offsetof(struct S1ap_OverloadResponse, present),
    sizeof(((struct S1ap_OverloadResponse *)0)->present),
    asn_MAP_S1ap_OverloadResponse_tag2el_1,
    1, /* Count of tags in the map */
    0,
    1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_OverloadResponse = {
    "S1ap-OverloadResponse",
    "S1ap-OverloadResponse",
    CHOICE_free,
    CHOICE_print,
    CHOICE_constraint,
    CHOICE_decode_ber,
    CHOICE_encode_der,
    CHOICE_decode_xer,
    CHOICE_encode_xer,
    0,
    0, /* No UPER support, use "-gen-PER" to enable */
    0,
    0, /* No APER support, use "-gen-PER" to enable */
    CHOICE_compare,
    CHOICE_outmost_tag,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    0, /* No PER visible constraints */
    asn_MBR_S1ap_OverloadResponse_1,
    1,                                     /* Elements count */
    &asn_SPC_S1ap_OverloadResponse_specs_1 /* Additional specs */
};
