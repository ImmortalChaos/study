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
#include "../include/euler_multiplesOf3and5.h"

class eulerMultipleTest : public CppUnit::TestFixture {
private:
        CPPUNIT_TEST_SUITE( eulerMultipleTest );
        CPPUNIT_TEST( test_getSumDivide );
        CPPUNIT_TEST( test_getSumNum );
        CPPUNIT_TEST( test_getSumEqu );
        CPPUNIT_TEST_SUITE_END();
 
public:
        void setUp() {}
 
        void tearDown() {}
 
        void test_getSumDivide() {
                CPPUNIT_ASSERT( getSumDivide(10)   == 23);
                CPPUNIT_ASSERT( getSumDivide(55)   == 698);
                CPPUNIT_ASSERT( getSumDivide(100)  == 2318);
                CPPUNIT_ASSERT( getSumDivide(1000) == 233168);
                CPPUNIT_ASSERT( getSumDivide(6789) == 10749704);
        }
 
        void test_getSumNum() {
                CPPUNIT_ASSERT( getSumNum(10)   == 23);
                CPPUNIT_ASSERT( getSumNum(55)   == 698);
                CPPUNIT_ASSERT( getSumNum(100)  == 2318);
                CPPUNIT_ASSERT( getSumNum(1000) == 233168);
                CPPUNIT_ASSERT( getSumNum(6789) == 10749704);
        }

        void test_getSumEqu() {
                CPPUNIT_ASSERT( getSumEqu(10)   == 23);
                CPPUNIT_ASSERT( getSumEqu(55)   == 698);
                CPPUNIT_ASSERT( getSumEqu(100)  == 2318);
                CPPUNIT_ASSERT( getSumEqu(1000) == 233168);
                CPPUNIT_ASSERT( getSumEqu(6789) == 10749704);
        }
};
 
CPPUNIT_TEST_SUITE_REGISTRATION( eulerMultipleTest );

