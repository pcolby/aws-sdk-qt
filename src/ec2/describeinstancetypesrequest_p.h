// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCETYPESREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstancetypesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypesRequest;

class DescribeInstanceTypesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceTypesRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceTypesRequest * const q);
    DescribeInstanceTypesRequestPrivate(const DescribeInstanceTypesRequestPrivate &other,
                                   DescribeInstanceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceTypesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
