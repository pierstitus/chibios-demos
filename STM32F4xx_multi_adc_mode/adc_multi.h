

extern void adcMultiStart(void);

extern void adcMultiStartConversion(
                        const ADCConversionGroup *grpp1,
                        const ADCConversionGroup *grpp2,
                        const ADCConversionGroup *grpp3,
                        adcsample_t *samples,
                        size_t depth);
