//
//  SESAudioEditorDelegate.h
//  SESAudioTool
//
//  Created by MCOMM00008 on 20/07/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SESAudioEditorDelegate <NSObject>

- (void)audioEditSuccess:(SESAudioProcessStep)step resultURL:(nonnull NSURL *)result;
- (void)audioEditError:(SESAudioProcessStep)step error:(nonnull NSError *)error;

@optional
- (void)audioEditProgress:(SESAudioProcessStep)step percentage:(int)percentage;

@end

NS_ASSUME_NONNULL_END
