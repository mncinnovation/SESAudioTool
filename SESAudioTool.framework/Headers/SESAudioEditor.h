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

@property (weak, nonatomic) id <SESAudioEditorDelegate> delegate;

- (void)trimAudio:(nonnull NSURL *)urlPath start:(nonnull NSString *)startTime duration:(nonnull NSString *)duration;
- (void)reduceNoice:(nonnull NSURL *)urlPath;
- (void)convertAudio:(nonnull NSURL *)urlPath to:(SESAudioFormat)audioFormat;

@end

NS_ASSUME_NONNULL_END
