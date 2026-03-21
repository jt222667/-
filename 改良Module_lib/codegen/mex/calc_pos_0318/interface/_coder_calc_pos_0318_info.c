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
      "789ce555cb6ed340143d4605b1e01116b0a61f0072eca671582055d0d022b5a026141001"
      "638f27b28b1fa9ed84a63bf8013e015688254b3e813d3bc417f009ac"
      "b871ec38b134724450aac2589e3be79e3b7366e68e3d90b677240097302e9f2f8cedc514"
      "57527b06b3a5c84b853869361c67b132d32fe3dfa596057ecc8fe231",
      "f00d8f4f7a5a81e7f8861fb7873d8e9047813be056c2741d97b71d8fb7a6c1ee0879cd29"
      "6a0246d4a87dc7e6ec55abef21b4a37c86ee3498ecc74bc17a574af6"
      "a3588afb518ccbf47a7fa82715fc22bd8c6786cbf45e10e9b25ad5b0f87a33bd7342fd31"
      "13c5619fc5b9ded705f51481de95d45aa97d864d3c4713b7d0c10642",
      "30d8703000c775ece9cceee0e79b4f7bbf5eac1e74d0e0c1db1d04d4b70f972274aa1d98"
      "d493c1a036234f8ff888ac0c155568b8092fd129dbc7cb73aeab68f3"
      "f8f389fdf6e587b44c3dfba3595fa65e564e4aef4830debce7f29a40af52e065ad79f780"
      "698ad95bdb759eda51db0df69f6ce5f37858a253360f08f0b2c6ffdf",
      "beef79d725ba272b29c38ef157f5cafecb56d0375d9eeb7d9016d37b2fd0cbf2763b25ca"
      "f316512e0cf273cad7103ee56440a722a4cce8941999da1a6e905da7"
      "97a146a84bf132d575c22af90dca6d3779d689ad91bf4e1e036b89c7a2568d7083a2357a"
      "4df22b3839dd7d1abd43a7cda07f904eea213d01bd3a624211d5a373",
      "7a9c9ec87ff5bed9fabe5d5ba65e564eeb7d7355a05729f066d4be5fd51e2baf1baaa2b6"
      "ec07c34787f70e71faef9bdfdbe7babf",
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
                    "\xba\xe6\xa8\xa1\\\xe6\x94\xb9\xe8\x89\xafModule_lib\\calc"
                    "_pos_0318.m"));
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
