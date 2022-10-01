// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_P_H
#define QTAWS_DESCRIBECHANNELREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelRequest;

class DescribeChannelRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelRequest * const q);
    DescribeChannelRequestPrivate(const DescribeChannelRequestPrivate &other,
                                   DescribeChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
