//
//  WSChatTableBaseCell.h
//  QQ
//
//  Created by weida on 15/8/15.
//  Copyright (c) 2015年 weida. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WSChatModel.h"
#import "PureLayout.h"

#define kWidthHead                    (40)  //头像宽度
#define kHeightHead                   (kWidthHead) //头像高度
#define kTopHead                      (10)  //头像离父视图顶部距离
#define kLeadingHead                  (10) //对方发送的消息时，头像距离父视图的leading(头像在左边)
#define kTraingHead                   (kLeadingHead) //自己发送的消息时，头像距离父视图的traing(头像在右边)

#define kOffsetHHeadToBubble          (0) //头像和气泡水平距离

#define kOffsetTopHeadToBubble        (5)  //头像和气泡顶部对其间距

#define kReuseIDSeparate       (@"-") //可重用ID字符串区分符号

#define kImageNameChat_send_nor     (@"chat_send_nor")
#define kImageNameChat_Recieve_nor  (@"chat_recive_nor")





@interface WSChatBaseTableViewCell : UITableViewCell
{
    @protected
    
    /**
     *  @brief  头像
     */
    UIImageView *mHead;
    
    /**
     *  @brief  汽包
     */
    UIImageView *mBubbleImageView;
    
    /**
     *  @brief  mBubbleImageView的宽度约束
     */
    NSLayoutConstraint *mWidthConstraintBubbleImageView;
    
    /**
     *  @brief  mBubbleImageView的高度约束
     */
    NSLayoutConstraint *mHeightConstraintBubbleImageView;

    /**
     *  @brief  本消息是否是本人发送的？
     */
    BOOL isSender;
    
    /**
     *  @brief  主要内容视图
     */
    UIView *mContentView;
}
/**
 *  @brief  聊天消息中单条消息模型
 */
@property(nonatomic,strong) WSChatModel *model;


@end