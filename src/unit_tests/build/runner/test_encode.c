/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include "../assemble/encode.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_encode_hal(void);
extern void test_encode_mul(void);
extern void test_encode_dp_rotated_immediate(void);
extern void test_encode_dp_shifted_register(void);
extern void test_encode_sdt(void);
extern void test_encode_sdt_with_invalidreg(void);
extern void test_encodeBrn(void);


/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test_encode.c");
  RUN_TEST(test_encode_hal, 8);
  RUN_TEST(test_encode_mul, 22);
  RUN_TEST(test_encode_dp_rotated_immediate, 44);
  RUN_TEST(test_encode_dp_shifted_register, 69);
  RUN_TEST(test_encode_sdt, 97);
  RUN_TEST(test_encode_sdt_with_invalidreg, 121);
  RUN_TEST(test_encodeBrn, 144);

  return suite_teardown(UnityEnd());
}