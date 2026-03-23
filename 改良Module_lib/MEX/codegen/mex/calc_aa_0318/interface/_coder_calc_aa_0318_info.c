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
      "789ce5554d6ed34014fe8c0a6251202c402ce10020c7c6f96151a942b4b4520834e14710"
      "70c793896cf04f6b3b69d21d5c8023c09223b0e40848ec1027e008ac"
      "7871ec38b164392228556146336fdefbdecc37336fec0769a72101b88849f9b23e911762"
      "bd14cb33982f595ccaf849f3ee388bb5b97909fe3e96dc7343310c27",
      "8acb1c319dd9f51ccb656ed81e1d08f822f0ec81e84648cfb245db72446b567930d69cad"
      "1968aa8ca1f1f8ae29f89b56df816f06e90eed59657a1ffb39e75d2b"
      "b88f6cc9de47d62fe13bf843be64fdf502be04e7cce63a63baac966bb3fcfb4bf29fcbe5"
      "9f2041e8f77998f27d5d92af92c3773996762c5fe01e5e620b77d0c1",
      "267c7098b03080c075ece9dcece0e7db4f7bbf5edd78dd415d78ef1af0d0459fe60be8d4"
      "5b3068a60c1565d468c4c1c8ca096354f529720b4ec457749f97163c"
      "5f56a6fee723f9edf30f69957cd79e1bd555f225e5a4f88639eb2dfa3eafe6f09532b8f6"
      "c8e2cf8c81b62be4de516373d86baacd603bddc7c3029ea27d20475f",
      "d5faffeb77bee8f9f2f2662946f831fe2a5fd17fbaebf50d5ba47c1fa5e5f83ee4f025f1"
      "db8881e2f805942319d905c56d0497623280429e328dcad42b149d9b"
      "242bd43834d27ae42f535f255d253ba318f7a25a2154237b952c0cb7234b97461ae975f2"
      "ae5133c8aee0e4789fd0ea1d7a6d8cfe453ab1fb543d6a3a42d202ea",
      "c7aff4387e91ff6adeb9ff7d475b255f524e6bdeb992c357cae046d0de2dd79e2a477555"
      "515b6673f4f870fb10a73feffc064a68bb24",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3288U, &nameCaptureInfo);
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
                    "\xba\xe6\xa8\xa1\\\xe6\x94\xb9\xe8\x89\xafModule_lib\\0318"
                    "\\calc_aa_0318.m"));
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
