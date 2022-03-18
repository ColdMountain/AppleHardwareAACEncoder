//
//  AppleHardwareAACEncoder.h
//  AACEncoderTest
//
//  Created by SKYLIGHT on 2021/11/16.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>


@interface AppleHardwareAACEncoder : NSObject

- (void)encodeWithBufferList:(AudioBufferList)bufferList completianBlock:(void (^)(NSData *encodedData, NSError *error))completionBlock;

@end

