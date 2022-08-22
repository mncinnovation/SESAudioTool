//
//  SATAudioEditor.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 27/06/22.
//

#import <Foundation/Foundation.h>
#import "SESAudioToolEnum.h"
#import "SESAudioEditorDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface SESAudioEditor : NSObject

typedef void(^audioCompletion)(NSURL * __nullable result, NSError * __nullable error);
typedef void(^audioProgress)(int percentage);


@property (weak, nonatomic) id <SESAudioEditorDelegate> delegate;
@property (nonatomic) NSURL * destinationFolder;

- (void)trimAudio:(nonnull NSURL *)urlPath start:(nonnull NSString *)startTime duration:(nonnull NSString *)duration;
- (void)trimAudio:(nonnull NSURL *)urlPath start:(nonnull NSString *)startTime duration:(nonnull NSString *)duration withCompletion:(nullable audioCompletion)completion;
- (void)trimAudio:(nonnull NSURL *)urlPath start:(nonnull NSString *)startTime duration:(nonnull NSString *)duration withCompletion:(nullable audioCompletion)completion withProgressPercentage:(nullable audioProgress)progressPercentage;

- (void)reduceNoice:(nonnull NSURL *)urlPath;
- (void)reduceNoice:(nonnull NSURL *)urlPath withCompletion:(nullable audioCompletion)completion;
- (void)reduceNoice:(nonnull NSURL *)urlPath withCompletion:(nullable audioCompletion)completion withProgressPercentage:(nullable audioProgress)progressPercentage;

- (void)convertAudio:(nonnull NSURL *)urlPath to:(SESAudioFormat)audioFormat;
- (void)convertAudio:(nonnull NSURL *)urlPath to:(SESAudioFormat)audioFormat withCompletion:(nullable audioCompletion)completion;
- (void)convertAudio:(nonnull NSURL *)urlPath to:(SESAudioFormat)audioFormat withCompletion:(nullable audioCompletion)completion withProgressPercentage:(nullable audioProgress)progressPercentage;

- (void)tuneAudio:(nonnull NSURL *)urlPath to:(SESAudioTuner)audioFormat;
- (void)tuneAudio:(nonnull NSURL *)urlPath to:(SESAudioTuner)audioFormat withCompletion:(nullable audioCompletion)completion;
- (void)tuneAudio:(nonnull NSURL *)urlPath to:(SESAudioTuner)audioFormat withCompletion:(nullable audioCompletion)completion withProgressPercentage:(nullable audioProgress)progressPercentage;
 
@end

NS_ASSUME_NONNULL_END
