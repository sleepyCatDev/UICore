/*
  ==============================================================================

    SCParameterSlider.h
    Created: 1 Nov 2021 9:03:08am
    Author:  dspra

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "SCControlBase.h"

namespace SCUI
{
    class SCParameterSlider : public juce::Slider, public SCControlBase, public juce::AsyncUpdater
    {
    public:
        SCParameterSlider();
        SCParameterSlider(juce::AudioProcessorParameter * parameter);

        // base class overrides
        virtual void controlValueChanged() override;
        virtual void updateControl() override;

        // slider class overrides
        virtual void valueChanged() override;

        // async
        virtual void handleAsyncUpdate() override;
    private:
        bool m_bIsDragging;
    };
}