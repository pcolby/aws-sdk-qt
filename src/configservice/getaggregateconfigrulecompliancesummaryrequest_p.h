// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFIGRULECOMPLIANCESUMMARYREQUEST_P_H
#define QTAWS_GETAGGREGATECONFIGRULECOMPLIANCESUMMARYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getaggregateconfigrulecompliancesummaryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConfigRuleComplianceSummaryRequest;

class GetAggregateConfigRuleComplianceSummaryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetAggregateConfigRuleComplianceSummaryRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetAggregateConfigRuleComplianceSummaryRequest * const q);
    GetAggregateConfigRuleComplianceSummaryRequestPrivate(const GetAggregateConfigRuleComplianceSummaryRequestPrivate &other,
                                   GetAggregateConfigRuleComplianceSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAggregateConfigRuleComplianceSummaryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
