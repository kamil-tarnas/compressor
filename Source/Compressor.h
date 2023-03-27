#include "CircularBuffer.h"
#pragma once

class Compressor {
public:
  Compressor();
  float compressSample(float data, float thresh, float ratio, float attack, float release, float knee);
private:
  CircularBuffer buffer;
  float tav, rms, gain;
};
