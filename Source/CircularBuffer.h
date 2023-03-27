#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

using AudioSampleBuffer = juce::AudioBuffer<float>;

class CircularBuffer {
public:
    CircularBuffer();
    CircularBuffer(int bufferSize, int delayLength);
    float getData();
    void setData(float data);
    void nextSample();
private:
    AudioSampleBuffer buffer;
    int writeIndex;
    int readIndex;
    int delayLength;
};
