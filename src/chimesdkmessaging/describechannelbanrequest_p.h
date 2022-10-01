// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELBANREQUEST_P_H
#define QTAWS_DESCRIBECHANNELBANREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelbanrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelBanRequest;

class DescribeChannelBanRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelBanRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelBanRequest * const q);
    DescribeChannelBanRequestPrivate(const DescribeChannelBanRequestPrivate &other,
                                   DescribeChannelBanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelBanRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
