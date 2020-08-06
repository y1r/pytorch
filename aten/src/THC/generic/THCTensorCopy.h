#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "THC/generic/THCTensorCopy.h"
#else

THC_API void THCTensor_(copy)(THCState *state, THCTensor *self, THCTensor *src);
THC_API void THCTensor_(copyAsync)(THCState *state, THCTensor *self, THCTensor *src);
THC_API void THCTensor_(copyIgnoringOverlaps)(THCState *state, THCTensor *self, THCTensor *src);

#endif
