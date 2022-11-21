//
//  LYTools.h
//  CommonTools
//
//  Created by mac02 on 2021/10/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaseHeader.h"
NS_ASSUME_NONNULL_BEGIN

@class PHAsset,UIImage;
@interface LYTools : NSObject
+ (NSString *)deviceID;//temp deviceID
+ (NSString *)appStoreVersion;
+ (void)countdownTime:(NSString*)second btn:(UIButton *)btn;

+ (NSInteger)currentTimeInterval;
+ (NSInteger)todayTimeInterval;
+ (NSString *)dateStringFromTimeIntevalYMDHMS:(NSInteger)intTime;
+ (NSString *)dateStringFromTimeIntevalYMD_HM:(NSInteger)intTime;

/// 字符串时间转date
+ (NSString *)dateStringFromTimeInteval:(NSInteger)intTime formate:(NSDateFormatter *)dateFormatter;
+ (NSDate *)dateFromYMDString:(NSString *)dateStr;
+ (NSDate *)dateFromYMdHmsSString:(NSString *)dateStr;
+ (NSDate *)dateFromRelativeDateString:(NSString *)dateStr;
/// 获取今天字符串日期yyyy-MM-dd
+ (NSString *)todayYMDStringDate;

+ (dispatch_source_t)countTime:(void(^)(void))second;
+ (dispatch_source_t)scoPingTime:(void(^)(void))second;
+ (dispatch_source_t)countTimeHalfSec:(void(^)(void))second;
+ (NSString *)calculateCallingTime:(NSInteger)second;

+ (BOOL)isNull:(NSDictionary *)dict key:(NSString*)key;
@end

@interface LYTools (Format)

//+ (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string;

@end

@interface LYTools (Image)

+ (UIImage *)generateQRCodeWithString:(NSString *)string Size:(CGFloat)size;
+ (UIImage*)addText:(NSString *)text font:(UIFont *)font inImage:(UIImage *)image area:(CGRect)area;
+ (UIImage *)addImage:(UIImage *)image inImage:(UIImage *)targetImg area:(CGRect)area;
+ (UIImage *)image:(UIImage *)image createCorner:(CGFloat)radius;
+ (UIImage *)PNGImage:(UIImage *)image;

+ (void)createAlbumPathIfNotExist:(nullable void(^)(BOOL success, NSError *__nullable error))completionHandler;
+ (void)saveToPhotosAlbum:(UIImage *)image error:(void(^)(NSString *__nullable err, PHAsset *_Nullable))errorMsg;
@end

@interface LYTools (Video)
// Asset
+ (void)videoCompression:(NSArray *)asset result:(VideoCompressionRes)res;
+ (NSString *)createCompressionVideoFilePath:(NSString *)fileName;
+ (void)removeVideoAtPath:(NSString *)path;
+ (void)removeVideoPath;

@end

@interface LYTools (Views)

+ (void)configViewShadow:(UIView *)view;
+ (CGFloat)getHeightWithContent:(NSString *)content width:(CGFloat)width font:(CGFloat)font;
+ (CGFloat)getWidthWithContent:(NSString *)content height:(CGFloat)height font:(CGFloat)font;
+ (NSArray *)fetchAlertWindow;
+ (NSArray *)fetchToastAlertWindow;

+ (void)addLeadingTag:(NSInteger)idx1 trailling:(NSInteger)idx2 inLable:(UILabel*)lable;
+ (void)addDottedLineInView:(UIView *)bView withColor:(UIColor *)color;
@end

@interface LYTools (Verify)

+ (BOOL)isJunBanNumberString:(NSString*)str;
+ (BOOL)isPhoneNumberString:(NSString*)str;
+ (BOOL)isNumberString:(NSString*)str;
+ (BOOL)matchCode:(NSString *)pwd;
+ (BOOL)stringContainsEmoji:(NSString *)string;

@end

@interface LYTools (Authorization)

@end

@interface LYTools (Device)
+ (void)stopOtherSession;
+ (void)resumeOtherSession;
+ (void)resetNPSAVAudioSession;
+ (void)resetAVAudioSession;
+ (void)playThrowSpeaker:(BOOL)speaker;
+ (id)keepPlayThrowSpeaker:(NSArray*(^)(void))monitor;
+ (void)showSYSSetting;
@end

@interface LYTools (File)
+ (NSString *)createFilePath:(NSString *)pathName;
@end
NS_ASSUME_NONNULL_END
