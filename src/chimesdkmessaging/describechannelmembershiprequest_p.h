// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipRequest;

class DescribeChannelMembershipRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelMembershipRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelMembershipRequest * const q);
    DescribeChannelMembershipRequestPrivate(const DescribeChannelMembershipRequestPrivate &other,
                                   DescribeChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
