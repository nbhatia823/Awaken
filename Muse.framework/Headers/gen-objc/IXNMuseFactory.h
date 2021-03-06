// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from sdk_bridge.djinni

#import <Foundation/Foundation.h>
@class IXNMuse;
@protocol IXNEventLoop;
@protocol IXNMusePlatformInterface;

/** Factory that produces a Muse given a platform interface. */

@interface IXNMuseFactory : NSObject

+ (nullable IXNMuse *)getMuse:(nullable id<IXNMusePlatformInterface>)platformInterface
                    asyncLoop:(nullable id<IXNEventLoop>)asyncLoop;

@end
