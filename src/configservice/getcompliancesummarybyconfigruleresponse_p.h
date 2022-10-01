// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULERESPONSE_P_H
#define QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByConfigRuleResponse;

class GetComplianceSummaryByConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetComplianceSummaryByConfigRuleResponsePrivate(GetComplianceSummaryByConfigRuleResponse * const q);

    void parseGetComplianceSummaryByConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComplianceSummaryByConfigRuleResponse)
    Q_DISABLE_COPY(GetComplianceSummaryByConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
