//
//  NIMSessionLayout.h
//  NIMKit
//
//  Created by chris on 2016/11/8.
//  Copyright © 2016年 NetEase. All rights reserved.
//

#import "NIMSessionConfigurator.h"
#import "NIMSessionPrivateProtocol.h"


typedef void (^ResetCustomLayoutHandle)(void);
typedef void (^ChangeCustomLayoutHandle)(CGFloat inputHeight);

@interface NIMSessionLayoutImpl : NSObject<NIMSessionLayout>

@property (nonatomic,strong)  UITableView *tableView;

@property (nonatomic,strong)  NIMInputView *inputView;
@property (nonatomic, copy) ResetCustomLayoutHandle resetCustomLayoutHandle;
@property (nonatomic, copy) ChangeCustomLayoutHandle changeCustomLayoutHandle;

- (instancetype)initWithSession:(NIMSession *)session
                         config:(id<NIMSessionConfig>)sessionConfig;

- (CGFloat)currentInputHeight;

@end
