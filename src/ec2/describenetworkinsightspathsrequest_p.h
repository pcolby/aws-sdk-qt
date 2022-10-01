// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSPATHSREQUEST_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSPATHSREQUEST_P_H

#include "ec2request_p.h"
#include "describenetworkinsightspathsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsPathsRequest;

class DescribeNetworkInsightsPathsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNetworkInsightsPathsRequestPrivate(const Ec2Request::Action action,
                                   DescribeNetworkInsightsPathsRequest * const q);
    DescribeNetworkInsightsPathsRequestPrivate(const DescribeNetworkInsightsPathsRequestPrivate &other,
                                   DescribeNetworkInsightsPathsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsPathsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
