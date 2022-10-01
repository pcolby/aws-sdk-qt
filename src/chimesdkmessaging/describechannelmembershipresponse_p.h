// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipResponse;

class DescribeChannelMembershipResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DescribeChannelMembershipResponsePrivate(DescribeChannelMembershipResponse * const q);

    void parseDescribeChannelMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipResponse)
    Q_DISABLE_COPY(DescribeChannelMembershipResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
