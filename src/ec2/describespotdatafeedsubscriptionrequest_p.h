// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H

#include "ec2request_p.h"
#include "describespotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotDatafeedSubscriptionRequest;

class DescribeSpotDatafeedSubscriptionRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotDatafeedSubscriptionRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotDatafeedSubscriptionRequest * const q);
    DescribeSpotDatafeedSubscriptionRequestPrivate(const DescribeSpotDatafeedSubscriptionRequestPrivate &other,
                                   DescribeSpotDatafeedSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotDatafeedSubscriptionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
