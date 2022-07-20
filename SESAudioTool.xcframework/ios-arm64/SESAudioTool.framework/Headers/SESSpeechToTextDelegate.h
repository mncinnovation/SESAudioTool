//
//  SESSpeechToTextDelegate.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 20/07/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SESSpeechToTextDelegate <NSObject>

- (void)speechToTextRequestResult:(SFSpeechRecognizerAuthorizationStatus)status;
- (void)speechToTextSuccessResult:(nonnull NSString *)text;
- (void)speechToTextErrorResult:(nonnull NSError *)errorMessage;

@end

NS_ASSUME_NONNULL_END
