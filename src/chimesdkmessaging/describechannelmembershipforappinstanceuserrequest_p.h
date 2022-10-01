// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelmembershipforappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipForAppInstanceUserRequest;

class DescribeChannelMembershipForAppInstanceUserRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelMembershipForAppInstanceUserRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelMembershipForAppInstanceUserRequest * const q);
    DescribeChannelMembershipForAppInstanceUserRequestPrivate(const DescribeChannelMembershipForAppInstanceUserRequestPrivate &other,
                                   DescribeChannelMembershipForAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipForAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
