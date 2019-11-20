#ifndef EMBEDDEDML_DEBUG_H
#define EMBEDDEDML_DEBUG_H
#include "pb/onnx.pb-c.h"

/* This functions is not right I think. Was having problems
FILE *fp;
#define DEBUG_PRINT(FMT, ARGS...) do { \
    if (DEBUG) \
        fp = fopen("output.txt", "a"); \
        fprintf(fp, "%s:%s:%d " FMT "\n", __FILE__, __FUNCTION__, __LINE__, ## ARGS); \
    } while (0)*/


#define DEBUG_PRINT(FMT, ARGS...) do { \
  if (DEBUG) \
      fprintf(stderr, "%s:%d " FMT "\n", __FILE__, __LINE__, ## ARGS); \
    } while (0)

void debug_print_attributes(size_t n_attribute, Onnx__AttributeProto **attribute);
void debug_print_dims(size_t n_dims, int64_t *dims);
void Debug_PrintArray(float *array, int m, int n);
void Debug_PrintModelInformation(Onnx__ModelProto *model);
void Debug_PrintTensorProto(Onnx__TensorProto *tp);

#endif
