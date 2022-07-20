//
//  SESRecorderDelegate.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 20/07/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SESRecorderDelegate <NSObject>

- (void)recorderSuccessResult:(nonnull NSURL *)resultPath;
- (void)recorderErrorResult:(nonnull NSError *)error;

@optional
- (void)recorderLog:(SESRecordState)state recordTime:(NSString *)recordTime;

@end

NS_ASSUME_NONNULL_END
