//
//  TransformStr.h
//  KeyBoardSearch
//
//  Created by mac02 on 2021/8/26.
//

#import <Foundation/Foundation.h>
#if !TARGET_OS_OSX
#import <UIKit/UIKit.h>
#endif
NS_ASSUME_NONNULL_BEGIN

@interface TransformStr : NSObject
+ (NSString *)transformToLatin:(NSString *)string;
+ (NSArray *)fetchTransformArr:(NSString *)string;
+ (NSString *)fetchTransformStr:(NSString *)string;
+ (NSString *)switchCapitalLatinToNum:(NSString *)latin;
+ (NSArray *_Nullable)transformIndex:(NSString *)chinese;
#if !TARGET_OS_OSX
// YES：编辑标记
+ (BOOL)fetchUITextFieldState:(UITextField*)textField;
// 输入的字符串
+ (NSString *)fetchUITextInputString:(UITextField*)textField;
+ (NSAttributedString *)addColorString:(NSString *)text reference:(NSString  * _Nullable )reference key:(NSString *)key color:(UIColor *)color;
#endif

+ (NSArray *)createSectionArr;
// spell contactId
+ (NSArray *)reformateContacts:(NSArray*)arr withIndexs:(NSArray *)indexs;
+ (NSArray *)prepareAndUploadContactReformate:(NSArray *)arrLoc arrSys:(NSArray *)arrSys;
+ (void)updateLocContactfilter:(NSArray *)arrService locContact:(NSArray*)locContact locStranger:(NSDictionary *)locStranger res:(void(^)(NSArray*del,NSArray*update,NSArray*save))res;


+ (NSArray *)contactQuickSearch:(NSArray*)contacts keyword:(NSString *)keyword;
+ (NSString *)createSqlFromContacts:(NSArray*)contacts keyStr:(NSString *)keyStr userId:(NSString*)userId;
@end

NS_ASSUME_NONNULL_END
