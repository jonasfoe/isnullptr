
#include <Rinternals.h>

extern SEXP isnullptr_(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"isnullptr_",   (DL_FUNC) &isnullptr_,   1},
    {NULL, NULL, 0}
};

void R_init_isnullptr(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    R_forceSymbols(dll, TRUE);
}

SEXP isnullptr_(SEXP pointer)
{
    return ScalarLogical(!R_ExternalPtrAddr(pointer));
}
