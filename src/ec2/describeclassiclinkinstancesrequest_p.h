// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSICLINKINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBECLASSICLINKINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "describeclassiclinkinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClassicLinkInstancesRequest;

class DescribeClassicLinkInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeClassicLinkInstancesRequestPrivate(const Ec2Request::Action action,
                                   DescribeClassicLinkInstancesRequest * const q);
    DescribeClassicLinkInstancesRequestPrivate(const DescribeClassicLinkInstancesRequestPrivate &other,
                                   DescribeClassicLinkInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClassicLinkInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
