// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstanceeventnotificationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventNotificationAttributesRequest;

class DescribeInstanceEventNotificationAttributesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceEventNotificationAttributesRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceEventNotificationAttributesRequest * const q);
    DescribeInstanceEventNotificationAttributesRequestPrivate(const DescribeInstanceEventNotificationAttributesRequestPrivate &other,
                                   DescribeInstanceEventNotificationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceEventNotificationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
