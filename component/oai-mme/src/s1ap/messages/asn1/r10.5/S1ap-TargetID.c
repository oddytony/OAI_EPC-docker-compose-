/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#include "S1ap-TargetID.h"

static asn_TYPE_member_t asn_MBR_S1ap_TargetID_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct S1ap_TargetID, choice.targeteNB_ID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_S1ap_TargeteNB_ID,
     0, /* Defer constraints checking to the member type */
     0, /* PER is not compiled, use -gen-PER */
     0, "targeteNB-ID"},
    {ATF_NOFLAGS, 0, offsetof(struct S1ap_TargetID, choice.targetRNC_ID),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_S1ap_TargetRNC_ID,
     0, /* Defer constraints checking to the member type */
     0, /* PER is not compiled, use -gen-PER */
     0, "targetRNC-ID"},
    {ATF_NOFLAGS, 0, offsetof(struct S1ap_TargetID, choice.cGI),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_S1ap_CGI, 0, /* Defer constraints checking to the member type */
     0,                    /* PER is not compiled, use -gen-PER */
     0, "cGI"},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_TargetID_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* targeteNB-ID at 1238 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* targetRNC-ID at 1239 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* cGI at 1240 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_TargetID_specs_1 = {
    sizeof(struct S1ap_TargetID),
    offsetof(struct S1ap_TargetID, _asn_ctx),
    offsetof(struct S1ap_TargetID, present),
    sizeof(((struct S1ap_TargetID *)0)->present),
    asn_MAP_S1ap_TargetID_tag2el_1,
    3, /* Count of tags in the map */
    0,
    3 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_TargetID = {
    "S1ap-TargetID",
    "S1ap-TargetID",
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
    asn_MBR_S1ap_TargetID_1,
    3,                             /* Elements count */
    &asn_SPC_S1ap_TargetID_specs_1 /* Additional specs */
};
