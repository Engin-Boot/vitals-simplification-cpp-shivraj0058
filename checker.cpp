#include <assert.h>
bool vitalsIsInsideLimit(float value,int lowerlimit, int upperlimit){
  return(value>=lowerlimit && value <=upperlimit);
}

bool vitalsisOk(float bpm,float spo2,float respRate){
  return(vitalIsInsideLimit(bpm,70,150) && vitalIsInsideLimit(spo2,90,100) && vitalIsiniLimit(respRate,30,100));
}

int main() {
  assert(vitalsIsInsideLimit(40,30,90)==true);
  assert(vitalsIsInsideLimit(20,30,90)==false);
  assert(vitalsIsInsideLimit(100,30,90)==false);
  assert(vitalsisOk(80,95,50)==true);
  assert(vitalsisOk(80,110,40)==false);
  assert(vitalsisOk(60,95,50)==false);
  assert(vitalsisOk(60,50,110)==false);
  assert(vitalsisOk(80,95,110)==false);
  assert(vitalsisOk(60,110,40)==false);

}
