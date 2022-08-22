//
//  SATEnum.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 27/06/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SESAudioProcessStep) {
    TRIMMING,
    REDUCE_NOICE,
    CONVERT,
    TUNER
};

typedef NS_ENUM(NSUInteger, SESLanguangeToTranscribe) {
    ENGLISH,
    INDONESIA
};

typedef NS_ENUM(NSUInteger, SESAudioFormat) {
    MP3,
    AAC,
    M4A,
    FLAC,
    WMA,
    WAV,
    AIFF,
    OGG,
    OPUS,
    AC3,
};

typedef NS_ENUM(NSUInteger, SESAudioTuner) {
    ROBOT,
    MOUNTAIN,
    INDOOR,
    SHIVER,
    CHIPMUNK
};

typedef NS_ENUM(NSUInteger, SESRecordState) {
    STANDBY,
    RECORDING,
    PAUSED,
    FINISH
};

@interface SESAudioToolEnum : NSObject

+ (NSString *)getLocaleFromLanguage:(SESLanguangeToTranscribe)language;
+ (NSString *)getStringFromLanguage:(SESLanguangeToTranscribe)language;
+ (NSString *)getStringFromAudioFormat:(SESAudioFormat)audioFormat;

@end

NS_ASSUME_NONNULL_END
