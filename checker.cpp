#include <assert.h>

bool bpmOk(float bpm){
  if(bpm < 70 || bpm > 150) {
    return false;
  }
  return true;
}
bool spo2Ok(float spo2){
  if(spo2 < 90) {
    return false;
  } 
  return true;
}
bool respRateOk(float respRate) {
  if(respRate < 30 || respRate > 95) {
    return false;
  }
  return true;
}

int main() {
  assert(bpmOk(80)==true);
  assert(spo2Ok(95)==true);
  assert(respRateOk(60)==true);
  assert(bpmOk(60)==false);
  assert(spo2Ok(80)==false);
  assert(respRateOk(20)==false);
}
