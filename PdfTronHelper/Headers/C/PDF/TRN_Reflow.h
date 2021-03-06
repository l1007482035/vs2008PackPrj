//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2021 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_CReflow
#define PDFTRON_H_CReflow

#ifdef __cplusplus
extern "C" {
#endif

#include <C/Common/TRN_Types.h>
#include <C/Common/TRN_Exception.h>


struct TRN_Reflow_tag;
typedef struct TRN_Reflow_tag* TRN_Reflow;


/* methods: */
TRN_API TRN_ReflowGetHtml(TRN_Reflow self, TRN_UString* result);
TRN_API TRN_ReflowGetAnnot(TRN_Reflow self, TRN_UString in_id, TRN_UString* result);
TRN_API TRN_ReflowSetAnnot(TRN_Reflow self, TRN_UString in_json, TRN_UString* result);

TRN_API TRN_ReflowDestroy(TRN_Reflow self);


#ifdef __cplusplus
} // extern C
#endif

#endif /* PDFTRON_H_CReflow */
