// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESREQUEST_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESREQUEST_P_H

#include "ec2request_p.h"
#include "describenetworkinsightsaccessscopesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopesRequest;

class DescribeNetworkInsightsAccessScopesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNetworkInsightsAccessScopesRequestPrivate(const Ec2Request::Action action,
                                   DescribeNetworkInsightsAccessScopesRequest * const q);
    DescribeNetworkInsightsAccessScopesRequestPrivate(const DescribeNetworkInsightsAccessScopesRequestPrivate &other,
                                   DescribeNetworkInsightsAccessScopesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsAccessScopesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
