// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESREQUEST_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESREQUEST_P_H

#include "ec2request_p.h"
#include "describenetworkinsightsaccessscopeanalysesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopeAnalysesRequest;

class DescribeNetworkInsightsAccessScopeAnalysesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNetworkInsightsAccessScopeAnalysesRequestPrivate(const Ec2Request::Action action,
                                   DescribeNetworkInsightsAccessScopeAnalysesRequest * const q);
    DescribeNetworkInsightsAccessScopeAnalysesRequestPrivate(const DescribeNetworkInsightsAccessScopeAnalysesRequestPrivate &other,
                                   DescribeNetworkInsightsAccessScopeAnalysesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsAccessScopeAnalysesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
