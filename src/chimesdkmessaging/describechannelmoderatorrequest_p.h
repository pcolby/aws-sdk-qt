// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATORREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMODERATORREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelmoderatorrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratorRequest;

class DescribeChannelModeratorRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelModeratorRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelModeratorRequest * const q);
    DescribeChannelModeratorRequestPrivate(const DescribeChannelModeratorRequestPrivate &other,
                                   DescribeChannelModeratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelModeratorRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
