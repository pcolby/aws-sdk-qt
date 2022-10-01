// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstanceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceAttributeRequest;

class DescribeInstanceAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceAttributeRequest * const q);
    DescribeInstanceAttributeRequestPrivate(const DescribeInstanceAttributeRequestPrivate &other,
                                   DescribeInstanceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
