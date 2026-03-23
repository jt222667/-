/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_pos_0318_info.c
 *
 * Code generation for function 'calc_pos_0318'
 *
 */

/* Include files */
#include "_coder_calc_pos_0318_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ce555416ed340147d4605b1281016b0a60700254ed3382c9010105aa416d484022260"
      "ecc94476b1e3d4764ad31d5c8023c00a7104961c01891de2041c8115"
      "2f891d27962c47444a5518cbf3e7fdf767deccfcb107cad6b602e022c6e5ebead85e8870"
      "21b267305bd2bc928a5366c371162b33fd62fe7d6485d70de5513806",
      "5dc395939e6dcfb5bb46376c0e7a12be0c3ce750b6474cc77664d37665631aec0c915b9f"
      "a22660480ddb772c295e37fa2e7c2b4866e84c83c97ebcca58ef4ace"
      "7ea44b7a3fd271b15eef2ff594943f4b2fe685e108bde7057ab15cd2b0f87a63bd7399fa"
      "632608fdbe0813bd6f0bea5533f42e47b61bd9e7b88717a8e3265ab8",
      "0d1f02166c1c42e21a767561b5f0ebede7dddf2fd7f65ba849efdd363cb4d187c3089db5"
      "0d933d8b28a3048d2d01835e41aec7c88036e66ec045fe7e5e9a737d"
      "699bc49f1fd9ef5f7e8ea865e9599fccea32f5e272527a4719e3cd7b3eaf66e815527c51"
      "abdfdd179a6af6d677ec6756d074bcbda79bc93c1ee5e8e4cd031978",
      "59e3ffafdff9bcebcbba370b11238ec77859ffe9b6d7371d99e87d5416d3fb90a117e7ef"
      "5644e4e72f60260cfa25f33660de75b22a238b6c9558abcccd75da0d"
      "be0215a20ee38bacabc465fa0de6b8337a36c856e8afd263607de469b35521ae315ae36b"
      "d2afe2e474f7387a8b67cde0bf48a7bacfc7e3ab23240a580f4fe9f1",
      "3f7eef6cfed8aa2c532f2ea7f5deb992a15748f166d07c50d29ea86f6a65b5dcb01e0e1e"
      "1fdc3fc0e9bf77fe003e41bd4d",
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
                emlrtMxCreateString("calc_pos_0318"));
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
                    "\\calc_pos_0318.m"));
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
                emlrtMxCreateString("yJQHyEOFVWxmqzSqjILGyB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_calc_pos_0318_info.c) */
