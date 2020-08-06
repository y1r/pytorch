#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "THC/generic/THCStorageCopy.h"
#else

/* Support for copy between different Storage types */

THC_API void THCStorage_(copy)(THCState *state, THCStorage *storage, THCStorage *src);
#if !defined(THC_REAL_IS_COMPLEXFLOAT) && !defined(THC_REAL_IS_COMPLEXDOUBLE)
    THC_API void THCStorage_(copyByte)(THCState *state, THCStorage *storage, struct THByteStorage *src);
    THC_API void THCStorage_(copyChar)(THCState *state, THCStorage *storage, struct THCharStorage *src);
    THC_API void THCStorage_(copyShort)(THCState *state, THCStorage *storage, struct THShortStorage *src);
    THC_API void THCStorage_(copyInt)(THCState *state, THCStorage *storage, struct THIntStorage *src);
    THC_API void THCStorage_(copyLong)(THCState *state, THCStorage *storage, struct THLongStorage *src);
    THC_API void THCStorage_(copyFloat)(THCState *state, THCStorage *storage, struct THFloatStorage *src);
    THC_API void THCStorage_(copyDouble)(THCState *state, THCStorage *storage, struct THDoubleStorage *src);
    THC_API void THCStorage_(copyHalf)(THCState *state, THCStorage *storage, struct THHalfStorage *src);
    THC_API void THCStorage_(copyBool)(THCState *state, THCStorage *storage, struct THBoolStorage *src);
    THC_API void THCStorage_(copyBFloat16)(THCState *state, THCStorage *storage, struct THBFloat16Storage *src);
#else
    THC_API void THCStorage_(copyComplexFloat)(THCState *state, THCStorage *storage, struct THComplexFloatStorage *src);
    THC_API void THCStorage_(copyComplexDouble)(THCState *state, THCStorage *storage, struct THComplexDoubleStorage *src);
#endif

#if !defined(THC_REAL_IS_COMPLEXFLOAT) && !defined(THC_REAL_IS_COMPLEXDOUBLE)
    // blocking copy
    THC_API void THCStorage_(copyCudaByte)(THCState *state, THCStorage *storage, struct THCudaByteStorage *src);
    THC_API void THCStorage_(copyCudaChar)(THCState *state, THCStorage *storage, struct THCudaCharStorage *src);
    THC_API void THCStorage_(copyCudaShort)(THCState *state, THCStorage *storage, struct THCudaShortStorage *src);
    THC_API void THCStorage_(copyCudaInt)(THCState *state, THCStorage *storage, struct THCudaIntStorage *src);
    THC_API void THCStorage_(copyCudaLong)(THCState *state, THCStorage *storage, struct THCudaLongStorage *src);
    THC_API void THCStorage_(copyCudaFloat)(THCState *state, THCStorage *storage, struct THCudaStorage *src);
    THC_API void THCStorage_(copyCudaDouble)(THCState *state, THCStorage *storage, struct THCudaDoubleStorage *src);
    THC_API void THCStorage_(copyCudaHalf)(THCState *state, THCStorage *storage, struct THCudaHalfStorage *src);
    THC_API void THCStorage_(copyCudaBool)(THCState *state, THCStorage *storage, struct THCudaBoolStorage *src);
    THC_API void THCStorage_(copyCudaBFloat16)(THCState *state, THCStorage *storage, struct THCudaBFloat16Storage *src);

    // non blocking copy
    THC_API void THCStorage_(copyAsyncCudaByte)(THCState *state, THCStorage *storage, struct THCudaByteStorage *src);
    THC_API void THCStorage_(copyAsyncCudaChar)(THCState *state, THCStorage *storage, struct THCudaCharStorage *src);
    THC_API void THCStorage_(copyAsyncCudaShort)(THCState *state, THCStorage *storage, struct THCudaShortStorage *src);
    THC_API void THCStorage_(copyAsyncCudaInt)(THCState *state, THCStorage *storage, struct THCudaIntStorage *src);
    THC_API void THCStorage_(copyAsyncCudaLong)(THCState *state, THCStorage *storage, struct THCudaLongStorage *src);
    THC_API void THCStorage_(copyAsyncCudaFloat)(THCState *state, THCStorage *storage, struct THCudaStorage *src);
    THC_API void THCStorage_(copyAsyncCudaDouble)(THCState *state, THCStorage *storage, struct THCudaDoubleStorage *src);
    THC_API void THCStorage_(copyAsyncCudaHalf)(THCState *state, THCStorage *storage, struct THCudaHalfStorage *src);
    THC_API void THCStorage_(copyAsyncCudaBool)(THCState *state, THCStorage *storage, struct THCudaBoolStorage *src);
    THC_API void THCStorage_(copyAsyncCudaBFloat16)(THCState *state, THCStorage *storage, struct THCudaBFloat16Storage *src);
#else
    // blocking copy
    THC_API void THCStorage_(copyCudaComplexFloat)(THCState *state, THCStorage *storage, struct THCudaComplexFloatStorage *src);
    THC_API void THCStorage_(copyCudaComplexDouble)(THCState *state, THCStorage *storage, struct THCudaComplexDoubleStorage *src);

    // non blocking copy
    THC_API void THCStorage_(copyAsyncCudaComplexFloat)(THCState *state, THCStorage *storage, struct THCudaComplexFloatStorage *src);
    THC_API void THCStorage_(copyAsyncCudaComplexDouble)(THCState *state, THCStorage *storage, struct THCudaComplexDoubleStorage *src);
#endif

#if !defined(THC_REAL_IS_COMPLEXFLOAT) && !defined(THC_REAL_IS_COMPLEXDOUBLE)
    // blocking copy
    THC_API void TH_CONCAT_2(THByteStorage_copyCuda  , Real)(THCState *state, THByteStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THCharStorage_copyCuda  , Real)(THCState *state, THCharStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THShortStorage_copyCuda , Real)(THCState *state, THShortStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THIntStorage_copyCuda   , Real)(THCState *state, THIntStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THLongStorage_copyCuda  , Real)(THCState *state, THLongStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THFloatStorage_copyCuda , Real)(THCState *state, THFloatStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THDoubleStorage_copyCuda, Real)(THCState *state, THDoubleStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THHalfStorage_copyCuda, Real)(THCState *state, THHalfStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THBoolStorage_copyCuda, Real)(THCState *state, THBoolStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THBFloat16Storage_copyCuda, Real)(THCState *state, THBFloat16Storage *self, struct THCStorage *src);

    // non blocking copy
    THC_API void TH_CONCAT_2(THByteStorage_copyAsyncCuda  , Real)(THCState *state, THByteStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THCharStorage_copyAsyncCuda  , Real)(THCState *state, THCharStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THShortStorage_copyAsyncCuda , Real)(THCState *state, THShortStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THIntStorage_copyAsyncCuda   , Real)(THCState *state, THIntStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THLongStorage_copyAsyncCuda  , Real)(THCState *state, THLongStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THFloatStorage_copyAsyncCuda , Real)(THCState *state, THFloatStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THDoubleStorage_copyAsyncCuda, Real)(THCState *state, THDoubleStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THHalfStorage_copyAsyncCuda, Real)(THCState *state, THHalfStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THBoolStorage_copyAsyncCuda, Real)(THCState *state, THBoolStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THBFloat16Storage_copyAsyncCuda, Real)(THCState *state, THBFloat16Storage *self, struct THCStorage *src);
#else
    // blocking copy
    THC_API void TH_CONCAT_2(THComplexFloatStorage_copyCuda , Real)(THCState *state, THComplexFloatStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THComplexDoubleStorage_copyCuda, Real)(THCState *state, THComplexDoubleStorage *self, struct THCStorage *src);

    // non blocking copy
    THC_API void TH_CONCAT_2(THComplexFloatStorage_copyAsyncCuda , Real)(THCState *state, THComplexFloatStorage *self, struct THCStorage *src);
    THC_API void TH_CONCAT_2(THComplexDoubleStorage_copyAsyncCuda, Real)(THCState *state, THComplexDoubleStorage *self, struct THCStorage *src);
#endif

THC_API void THStorage_(copyCuda)(THCState *state, THStorage *self, THCStorage *src);
THC_API void THCStorage_(copyCuda)(THCState *state, THCStorage *self, THCStorage *src);
THC_API void THCStorage_(copyCPU)(THCState *state, THCStorage *self, THStorage *src);

#endif
