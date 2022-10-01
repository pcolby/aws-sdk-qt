// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELFLOWRESPONSE_H
#define QTAWS_DESCRIBECHANNELFLOWRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "describechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelFlowResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelFlowResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DescribeChannelFlowResponse(const DescribeChannelFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelFlowResponse)
    Q_DISABLE_COPY(DescribeChannelFlowResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
