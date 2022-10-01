// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DESCRIBECHANNELMODERATEDBYAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "describechannelmoderatedbyappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratedByAppInstanceUserRequest;

class DescribeChannelModeratedByAppInstanceUserRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DescribeChannelModeratedByAppInstanceUserRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DescribeChannelModeratedByAppInstanceUserRequest * const q);
    DescribeChannelModeratedByAppInstanceUserRequestPrivate(const DescribeChannelModeratedByAppInstanceUserRequestPrivate &other,
                                   DescribeChannelModeratedByAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelModeratedByAppInstanceUserRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
