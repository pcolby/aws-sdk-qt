// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSREQUEST_P_H
#define QTAWS_DESCRIBEREGIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describeregionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeRegionsRequest;

class DescribeRegionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeRegionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeRegionsRequest * const q);
    DescribeRegionsRequestPrivate(const DescribeRegionsRequestPrivate &other,
                                   DescribeRegionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRegionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
