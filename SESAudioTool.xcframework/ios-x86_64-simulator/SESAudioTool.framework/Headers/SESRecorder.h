//
//  SESRecorder.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 27/06/22.
//

#import <Foundation/Foundation.h>
#import "SESAudioToolEnum.h"
#import "SESRecorderDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface SESRecorder : NSObject

@property (weak, nonatomic) id <SESRecorderDelegate> delegate;
@property (nonatomic) BOOL logEnabled;
@property (readonly, nonatomic) SESRecordState state;

- (void)configure:(nonnull NSURL *)resultPath defaultResultName:(nonnull NSString *)resultName;
- (void)startRecording;
- (void)pauseRecoding;
- (void)finishRecording;
- (float)lastAveragePower;


@end

NS_ASSUME_NONNULL_END
