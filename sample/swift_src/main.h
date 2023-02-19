#include <stdint.h>

typedef enum NiwakaEnumTag { Variant1, Variant2} NiwakaEnumTag;
typedef struct NiwakaVariant1Fields{
    int32_t _0;
    uint32_t _1;
} NiwakaVariant1Fields;
union NiwakaEnumFields { NiwakaVariant1Fields Variant1;};
typedef struct NiwakaEnum { NiwakaEnumTag tag; union NiwakaEnumFields payload;} NiwakaEnum;
void print_niwaka_enum(struct NiwakaEnum niwaka_enum);