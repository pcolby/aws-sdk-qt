// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULEREQUEST_P_H
#define QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "getcompliancesummarybyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByConfigRuleRequest;

class GetComplianceSummaryByConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetComplianceSummaryByConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetComplianceSummaryByConfigRuleRequest * const q);
    GetComplianceSummaryByConfigRuleRequestPrivate(const GetComplianceSummaryByConfigRuleRequestPrivate &other,
                                   GetComplianceSummaryByConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceSummaryByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
