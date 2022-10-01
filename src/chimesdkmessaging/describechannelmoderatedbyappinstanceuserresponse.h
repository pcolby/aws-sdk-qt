// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERRESPONSE_H
#define QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "describechannelmoderatedbyappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratedByAppInstanceUserResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelModeratedByAppInstanceUserResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DescribeChannelModeratedByAppInstanceUserResponse(const DescribeChannelModeratedByAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelModeratedByAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelModeratedByAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeChannelModeratedByAppInstanceUserResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
