// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULERESPONSE_P_H
#define QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateComplianceDetailsByConfigRuleResponse;

class GetAggregateComplianceDetailsByConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetAggregateComplianceDetailsByConfigRuleResponsePrivate(GetAggregateComplianceDetailsByConfigRuleResponse * const q);

    void parseGetAggregateComplianceDetailsByConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAggregateComplianceDetailsByConfigRuleResponse)
    Q_DISABLE_COPY(GetAggregateComplianceDetailsByConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
