// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSREQUEST_P_H
#define QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeaggregationauthorizationsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregationAuthorizationsRequest;

class DescribeAggregationAuthorizationsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeAggregationAuthorizationsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeAggregationAuthorizationsRequest * const q);
    DescribeAggregationAuthorizationsRequestPrivate(const DescribeAggregationAuthorizationsRequestPrivate &other,
                                   DescribeAggregationAuthorizationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAggregationAuthorizationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
