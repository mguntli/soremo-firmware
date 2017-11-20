/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Mon Nov 13 23:01:00 2017. */

#ifndef PB_NANOPB_PB_H_INCLUDED
#define PB_NANOPB_PB_H_INCLUDED
#include "pb.h"

#include "descriptor.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _FieldType {
    FieldType_FT_DEFAULT = 0,
    FieldType_FT_CALLBACK = 1,
    FieldType_FT_POINTER = 4,
    FieldType_FT_STATIC = 2,
    FieldType_FT_IGNORE = 3,
    FieldType_FT_INLINE = 5
} FieldType;
#define _FieldType_MIN FieldType_FT_DEFAULT
#define _FieldType_MAX FieldType_FT_INLINE
#define _FieldType_ARRAYSIZE ((FieldType)(FieldType_FT_INLINE+1))

typedef enum _IntSize {
    IntSize_IS_DEFAULT = 0,
    IntSize_IS_8 = 8,
    IntSize_IS_16 = 16,
    IntSize_IS_32 = 32,
    IntSize_IS_64 = 64
} IntSize;
#define _IntSize_MIN IntSize_IS_DEFAULT
#define _IntSize_MAX IntSize_IS_64
#define _IntSize_ARRAYSIZE ((IntSize)(IntSize_IS_64+1))

/* Struct definitions */
typedef struct _NanoPBOptions {
    bool has_max_size;
    int32_t max_size;
    bool has_max_count;
    int32_t max_count;
    bool has_type;
    FieldType type;
    bool has_long_names;
    bool long_names;
    bool has_packed_struct;
    bool packed_struct;
    bool has_skip_message;
    bool skip_message;
    bool has_int_size;
    IntSize int_size;
    bool has_no_unions;
    bool no_unions;
    bool has_msgid;
    uint32_t msgid;
    bool has_packed_enum;
    bool packed_enum;
    bool has_anonymous_oneof;
    bool anonymous_oneof;
    bool has_proto3;
    bool proto3;
    bool has_enum_to_string;
    bool enum_to_string;
    bool has_max_length;
    int32_t max_length;
    bool has_fixed_length;
    bool fixed_length;
/* @@protoc_insertion_point(struct:NanoPBOptions) */
} NanoPBOptions;

/* Extensions */
extern const pb_extension_type_t nanopb_fileopt; /* field type: NanoPBOptions nanopb_fileopt; */
extern const pb_extension_type_t nanopb_msgopt; /* field type: NanoPBOptions nanopb_msgopt; */
extern const pb_extension_type_t nanopb_enumopt; /* field type: NanoPBOptions nanopb_enumopt; */
extern const pb_extension_type_t nanopb; /* field type: NanoPBOptions nanopb; */

/* Default values for struct fields */
extern const IntSize NanoPBOptions_int_size_default;
extern const FieldType NanoPBOptions_type_default;
extern const bool NanoPBOptions_long_names_default;
extern const bool NanoPBOptions_packed_struct_default;
extern const bool NanoPBOptions_packed_enum_default;
extern const bool NanoPBOptions_skip_message_default;
extern const bool NanoPBOptions_no_unions_default;
extern const bool NanoPBOptions_anonymous_oneof_default;
extern const bool NanoPBOptions_proto3_default;
extern const bool NanoPBOptions_enum_to_string_default;
extern const bool NanoPBOptions_fixed_length_default;

/* Initializer values for message structs */
#define NanoPBOptions_init_default               {false, 0, false, 0, false, FieldType_FT_DEFAULT, false, true, false, false, false, false, false, IntSize_IS_DEFAULT, false, false, false, 0, false, false, false, false, false, false, false, false, false, 0, false, false}
#define NanoPBOptions_init_zero                  {false, 0, false, 0, false, (FieldType)0, false, 0, false, 0, false, 0, false, (IntSize)0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define NanoPBOptions_max_size_tag               1
#define NanoPBOptions_max_length_tag             14
#define NanoPBOptions_max_count_tag              2
#define NanoPBOptions_int_size_tag               7
#define NanoPBOptions_type_tag                   3
#define NanoPBOptions_long_names_tag             4
#define NanoPBOptions_packed_struct_tag          5
#define NanoPBOptions_packed_enum_tag            10
#define NanoPBOptions_skip_message_tag           6
#define NanoPBOptions_no_unions_tag              8
#define NanoPBOptions_msgid_tag                  9
#define NanoPBOptions_anonymous_oneof_tag        11
#define NanoPBOptions_proto3_tag                 12
#define NanoPBOptions_enum_to_string_tag         13
#define NanoPBOptions_fixed_length_tag           15
#define nanopb_fileopt_tag                       1010
#define nanopb_msgopt_tag                        1010
#define nanopb_enumopt_tag                       1010
#define nanopb_tag                               1010

/* Struct field encoding specification for nanopb */
extern const pb_field_t NanoPBOptions_fields[16];

/* Maximum encoded size of messages (where known) */
#define NanoPBOptions_size                       61

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define NANOPB_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
