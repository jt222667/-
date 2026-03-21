/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_aa_0318_info.c
 *
 * Code generation for function 'calc_aa_0318'
 *
 */

/* Include files */
#include "_coder_calc_aa_0318_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ce555cd6ed34010fe8c0ae250201c401ccb0380121b3709874a156a4b2b8540137e04"
      "0677bd59cb06ffb4b69326bdc10bf00870e4c89147e0ce0df1043c02"
      "2726891d27962c4704a52aec6a7776e69bdd6f7767ed81b4db90005cc6b87c5e1dcb4bb1"
      "5e8ae539cc962c2e65fca459779cc7caccbc047f1f4bee7b91e84763",
      "c563ae98ccecf8aeed312f6a0f0e050211fa4e4f744688693ba26dbba235ad3c186aeef6"
      "14345186d0707ccf12fc4dabeb22b0c27487ceb432b98f839cf3ae14"
      "dc47b664ef23eb97f01dfe215fb2fe6a015f8273e6709d31bdac546ad3fc070bf25fc8e5"
      "1f236114747994f27d5d90af92c3773596462c5f600b2fb18dbbd0b0",
      "89001c166cf420b0867d9d5b1a7ebefdb4ffebd5cdd71aeac27fd7808f0eba70c843a7de"
      "a695349ac568ccc9c2a8ea2843a11dd4701b6ecc53748f57e63c5756"
      "a6fe1747f2db971fd232f96e3c37aacbe44bca69f1f573d69bf75d5ecfe12b6570f591cd"
      "9f193d754f94cde3c666df6c2acd7027ddc7c3029ea27d20475fd6fa",
      "ffdbf73defb9f2f2642946f8c9dfe52bfa2f77fcaee18894efa3b418df871cbe246e1b31"
      "501cb790722223bba0780de051547a90c9b34ca30af532c5e716c975"
      "6a1c2a6926f997a9af92ae909d516ccd515d2754257b952c0c7746960e8d54d2ebe45da3"
      "66905dc6e9f13ea1d5357a6f8cfe413ab107547d6a3a22d242ea87ef",
      "f4247e93ff6abeb9ff7d575d265f52ce6abeb996c357cae046d8deabd49ecac77545565a"
      "5673f0f868e708673fdffc06f73eb896",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3272U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[7] = {
      "QualifiedName",    "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "ResolvedFilePath", "TimeStamp",      "Visible"};
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum", "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "AuxData"};
  uint8_T v[216] = {
      0U,   1U,   73U,  77U,  0U,   0U,   0U,   0U,   14U,  0U,   0U,   0U,
      200U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,
      2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   4U,   0U,
      17U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,   17U,  0U,   0U,   0U,
      67U,  108U, 97U,  115U, 115U, 69U,  110U, 116U, 114U, 121U, 80U,  111U,
      105U, 110U, 116U, 115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      14U,  0U,   0U,   0U,   112U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      0U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   4U,   0U,   14U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,
      56U,  0U,   0U,   0U,   81U,  117U, 97U,  108U, 105U, 102U, 105U, 101U,
      100U, 78U,  97U,  109U, 101U, 0U,   77U,  101U, 116U, 104U, 111U, 100U,
      115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   80U,  114U, 111U, 112U,
      101U, 114U, 116U, 105U, 101U, 115U, 0U,   0U,   0U,   0U,   72U,  97U,
      110U, 100U, 108U, 101U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("calc_aa_0318"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "ResolvedFilePath",
                emlrtMxCreateString(
                    "F:\\Archive "
                    "\xe5\xbd\x92\xe6\xa1\xa3\\\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbb"
                    "\xba\xe6\xa8\xa1\\\xe6\x94\xb9\xe8\x89\xafModule_lib\\calc"
                    "_aa_0318.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740062.40071759257));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("25.2.0.3042426 (R2025b) Update 1"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("iuQA21Bi7deVjdSXbciL9"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_calc_aa_0318_info.c) */
