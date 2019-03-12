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
#include "../include/sample.h"

class AddTest : public CppUnit::TestFixture {
private:
        CPPUNIT_TEST_SUITE( AddTest );
        CPPUNIT_TEST( runAddTest );
        CPPUNIT_TEST( runMulTest );
        CPPUNIT_TEST_SUITE_END();
 
public:
        void setUp() {}
 
        void tearDown() {}
 
        void runAddTest() {
                CPPUNIT_ASSERT( 5 == add(2,3) );
                CPPUNIT_ASSERT( 20 == add(10,10) );
        }
 
        void runMulTest() {
                CPPUNIT_ASSERT( 6 == add(2,3) );
                CPPUNIT_ASSERT( 100 == add(10,10) );
        }
};
 
CPPUNIT_TEST_SUITE_REGISTRATION( AddTest);

int main(int argc, char* argv[])
{
    // informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;
 
    // register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener (&collectedresults);
 
    // register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener (&progress);
 
    // insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
    testrunner.run(testresult);
 
    // output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
    compileroutputter.write ();
 
    // Output XML for Jenkins CPPunit plugin
    std::ofstream xmlFileOut("test_sample.xml");
    CPPUNIT_NS::XmlOutputter xmlOut(&collectedresults, xmlFileOut);
    xmlOut.write();

    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
}
