//
//  SESSpeechToText.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 27/06/22.
//

#import <Foundation/Foundation.h>
#import <Speech/Speech.h>
#import "SESAudioToolEnum.h"
#import "SESSpeechToTextDelegate.h""

NS_ASSUME_NONNULL_BEGIN

@interface SESSpeechToText : NSObject

@property (weak, nonatomic) id <SESSpeechToTextDelegate> delegate;
@property (nonatomic) SESLanguangeToTranscribe language;

- (void)requestPermission;
- (void)transcribeAudio:(nonnull NSURL *)urlPath;

@end

NS_ASSUME_NONNULL_END
