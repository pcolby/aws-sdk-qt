// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESREQUEST_P_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeaggregatecompliancebyconfigrulesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConfigRulesRequest;

class DescribeAggregateComplianceByConfigRulesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeAggregateComplianceByConfigRulesRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeAggregateComplianceByConfigRulesRequest * const q);
    DescribeAggregateComplianceByConfigRulesRequestPrivate(const DescribeAggregateComplianceByConfigRulesRequestPrivate &other,
                                   DescribeAggregateComplianceByConfigRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAggregateComplianceByConfigRulesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
