#ifdef __cplusplus
#import "fmsl.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNFmslSpec.h"

@interface Fmsl : NSObject <NativeFmslSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Fmsl : NSObject <RCTBridgeModule>
#endif

@end
