// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSREQUEST_P_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeaggregatecompliancebyconformancepacksrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConformancePacksRequest;

class DescribeAggregateComplianceByConformancePacksRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeAggregateComplianceByConformancePacksRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeAggregateComplianceByConformancePacksRequest * const q);
    DescribeAggregateComplianceByConformancePacksRequestPrivate(const DescribeAggregateComplianceByConformancePacksRequestPrivate &other,
                                   DescribeAggregateComplianceByConformancePacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAggregateComplianceByConformancePacksRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
