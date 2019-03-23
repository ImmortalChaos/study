#include <iostream>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/XmlOutputter.h>
#include "../include/euler_evenFibonacciNumbers.h"

class eulerEvenFibonacciTest : public CppUnit::TestFixture {
private:
        CPPUNIT_TEST_SUITE( eulerEvenFibonacciTest );
        CPPUNIT_TEST( test_getFibonacciLoop );
        CPPUNIT_TEST_SUITE_END();
 
public:
        void setUp() {}
 
        void tearDown() {}
 
        void test_getSumByEqu() {
                CPPUNIT_ASSERT( getFibonacciLoop(0) == 0);
                CPPUNIT_ASSERT( getFibonacciLoop(4000000) == 4613732);
        }
};
 
CPPUNIT_TEST_SUITE_REGISTRATION( eulerEvenFibonacciTest );

