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
        CPPUNIT_TEST( test_getSumByDivide );
        CPPUNIT_TEST( test_getSumByNum );
        CPPUNIT_TEST( test_getSumByEqu );
        CPPUNIT_TEST_SUITE_END();
 
public:
        void setUp() {}
 
        void tearDown() {}
 
        void test_getSumByDivide() {
                CPPUNIT_ASSERT( getSumByDivide(10)   == 23);
                CPPUNIT_ASSERT( getSumByDivide(55)   == 698);
                CPPUNIT_ASSERT( getSumByDivide(100)  == 2318);
                CPPUNIT_ASSERT( getSumByDivide(1000) == 233168);
                CPPUNIT_ASSERT( getSumByDivide(6789) == 10749704);
        }
 
        void test_getSumByNum() {
                CPPUNIT_ASSERT( getSumByNum(10)   == 23);
                CPPUNIT_ASSERT( getSumByNum(55)   == 698);
                CPPUNIT_ASSERT( getSumByNum(100)  == 2318);
                CPPUNIT_ASSERT( getSumByNum(1000) == 233168);
                CPPUNIT_ASSERT( getSumByNum(6789) == 10749704);
        }

        void test_getSumByEqu() {
                CPPUNIT_ASSERT( getSumByEqu(10)   == 23);
                CPPUNIT_ASSERT( getSumByEqu(55)   == 698);
                CPPUNIT_ASSERT( getSumByEqu(100)  == 2318);
                CPPUNIT_ASSERT( getSumByEqu(1000) == 233168);
                CPPUNIT_ASSERT( getSumByEqu(6789) == 10749704);
        }
};
 
CPPUNIT_TEST_SUITE_REGISTRATION( eulerMultipleTest );

