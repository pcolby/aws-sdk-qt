// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFIGRULECOMPLIANCESUMMARYRESPONSE_P_H
#define QTAWS_GETAGGREGATECONFIGRULECOMPLIANCESUMMARYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConfigRuleComplianceSummaryResponse;

class GetAggregateConfigRuleComplianceSummaryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetAggregateConfigRuleComplianceSummaryResponsePrivate(GetAggregateConfigRuleComplianceSummaryResponse * const q);

    void parseGetAggregateConfigRuleComplianceSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAggregateConfigRuleComplianceSummaryResponse)
    Q_DISABLE_COPY(GetAggregateConfigRuleComplianceSummaryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
