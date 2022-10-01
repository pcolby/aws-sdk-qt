// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULEREQUEST_P_H
#define QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "getaggregatecompliancedetailsbyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateComplianceDetailsByConfigRuleRequest;

class GetAggregateComplianceDetailsByConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetAggregateComplianceDetailsByConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetAggregateComplianceDetailsByConfigRuleRequest * const q);
    GetAggregateComplianceDetailsByConfigRuleRequestPrivate(const GetAggregateComplianceDetailsByConfigRuleRequestPrivate &other,
                                   GetAggregateComplianceDetailsByConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAggregateComplianceDetailsByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
