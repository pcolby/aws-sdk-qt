// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELFLOWREQUEST_H
#define QTAWS_DESCRIBECHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    DescribeChannelFlowRequest(const DescribeChannelFlowRequest &other);
    DescribeChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
