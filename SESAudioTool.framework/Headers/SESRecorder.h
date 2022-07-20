//
//  SESRecorder.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 27/06/22.
//

#import <Foundation/Foundation.h>
#import "SESAudioToolEnum.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SESRecorderDelegate <NSObject>

- (void)recorderSuccessResult:(nonnull NSURL *)resultPath;
- (void)recorderErrorResult:(nonnull NSError *)error;

@optional
- (void)recorderLog:(SESRecordState)state recordTime:(NSString *)recordTime;

@end

@interface SESRecorder : NSObject

@property (weak, nonatomic) id <SESRecorderDelegate> delegate;
@property (nonatomic) BOOL logEnabled;
@property (readonly, nonatomic) SESRecordState state;

- (void)configure:(nonnull NSURL *)resultPath defaultResultName:(nonnull NSString *)resultName;
- (void)startRecording;
- (void)pauseRecoding;
- (void)finishRecording;


@end

NS_ASSUME_NONNULL_END
