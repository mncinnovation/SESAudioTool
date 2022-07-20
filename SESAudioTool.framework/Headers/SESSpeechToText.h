//
//  SESSpeechToText.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 27/06/22.
//

#import <Foundation/Foundation.h>
#import <Speech/Speech.h>
#import "SESAudioToolEnum.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SESSpeechToTextDelegate <NSObject>

- (void)speechToTextRequestResult:(SFSpeechRecognizerAuthorizationStatus)status;
- (void)speechToTextSuccessResult:(nonnull NSString *)text;
- (void)speechToTextErrorResult:(nonnull NSError *)errorMessage;

@end

@interface SESSpeechToText : NSObject

@property (weak, nonatomic) id <SESSpeechToTextDelegate> delegate;
@property (nonatomic) SESLanguangeToTranscribe language;

- (void)requestPermission;
- (void)transcribeAudio:(nonnull NSURL *)urlPath;

@end

NS_ASSUME_NONNULL_END
