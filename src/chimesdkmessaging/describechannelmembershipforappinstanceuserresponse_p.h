// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipForAppInstanceUserResponse;

class DescribeChannelMembershipForAppInstanceUserResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DescribeChannelMembershipForAppInstanceUserResponsePrivate(DescribeChannelMembershipForAppInstanceUserResponse * const q);

    void parseDescribeChannelMembershipForAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipForAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeChannelMembershipForAppInstanceUserResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
