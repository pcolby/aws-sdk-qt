// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratedByAppInstanceUserResponse;

class DescribeChannelModeratedByAppInstanceUserResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DescribeChannelModeratedByAppInstanceUserResponsePrivate(DescribeChannelModeratedByAppInstanceUserResponse * const q);

    void parseDescribeChannelModeratedByAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelModeratedByAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeChannelModeratedByAppInstanceUserResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
