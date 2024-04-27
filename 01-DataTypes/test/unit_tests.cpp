#include <string>

void testMultiplyInts();
void testMultiplyFloats();
void testGetCircumference(float radius);
void testAverageFloats(float a, float b, float c);
void testAverageInts(int a, int b, int c);
void testGetRPM(float rotations, float time_in_seconds);
void testGetDistance(float wheelRadius, float rotations, float duration_seconds);

int main(int argc, char *argv[]) {
  if (argc < 2 || argv[1] == std::string("1"))
     testMultiplyInts();
  if (argc < 2 || argv[1] == std::string("2"))
    testMultiplyFloats();
  if (argc < 2 || argv[1] == std::string("3")){
    testGetCircumference(1.4);
    testGetCircumference(0);
    testGetCircumference(90000);
    testGetCircumference(-19);
    testGetCircumference(-1.55);
  }
  if (argc < 2 || argv[1] == std::string("4")){
    testAverageFloats(1, 3, 5);
    testAverageFloats(56, 3, 5);
    testAverageFloats(14, -1, -54);
    testAverageFloats(1, 0, 0);
    testAverageFloats(1, 34, 1);
  }
  if (argc < 2 || argv[1] == std::string("5")){
    testAverageInts(1,4,35);
    testAverageInts(76,4,35);
    testAverageInts(15,48,35);
    testAverageInts(1,4,3577);
    testAverageInts(1,7,90000);
    testAverageInts(55,-100,25);
  }
  if (argc < 2 || argv[1] == std::string("6")){
    testGetRPM(12.5, 60);
    testGetRPM(54.2, 123);
    testGetRPM(3.14, 2);
    testGetRPM(11231, 156);
    testGetRPM(100, 120);
    testGetRPM(15651651, 10);
  }
  if (argc < 2 || argv[1] == std::string("7")){
    testGetDistance(351, 150, 156);
    testGetDistance(2321, 12.0012, 15);
    testGetDistance(334, 54, 123);
    testGetDistance(10, 1520, 60);
    testGetDistance(0.44, 31, 14);
  }

}