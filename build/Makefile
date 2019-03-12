CXX             = g++ 
TESTS           = $(wildcard ../test/*.cpp) $(wildcard ../test/*.c)
SRCS            = $(wildcard ../src/*.cpp) $(wildcard ../src/*.c)
TOBJS           = $(notdir $(TESTS:.cpp=.o))
SOBJS           = $(notdir $(SRCS:.cpp=.o))
TARGET          = run_test 
LIBS            = -lcppunit -lgcov
LIB_DIRS        = 
INC             = -I../include
 
all : $(TARGET)
	$(CXX) -o $(TARGET) $(TOBJS) $(SOBJS) $(INC) $(LIB_DIRS) $(LIBS)
 
$(TARGET) :
	$(CXX) -c -g $(SRCS) -fprofile-arcs -ftest-coverage $(INC) $(LIB_DIRS) $(LIBS)
	$(CXX) -c -g $(TESTS) $(INC) $(LIB_DIRS) $(LIBS)
 
clean :
	rm -f $(TARGET)
	rm -f *.xml
	rm -f *.o
	rm -f *.gcda
	rm -f *.gcno
