// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELFLOWRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelFlowResponse;

class DescribeChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DescribeChannelFlowResponsePrivate(DescribeChannelFlowResponse * const q);

    void parseDescribeChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelFlowResponse)
    Q_DISABLE_COPY(DescribeChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
