// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstancecreditspecificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceCreditSpecificationsRequest;

class DescribeInstanceCreditSpecificationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceCreditSpecificationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceCreditSpecificationsRequest * const q);
    DescribeInstanceCreditSpecificationsRequestPrivate(const DescribeInstanceCreditSpecificationsRequestPrivate &other,
                                   DescribeInstanceCreditSpecificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceCreditSpecificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
