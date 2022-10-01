// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESRESPONSE_P_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConfigRulesResponse;

class DescribeAggregateComplianceByConfigRulesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeAggregateComplianceByConfigRulesResponsePrivate(DescribeAggregateComplianceByConfigRulesResponse * const q);

    void parseDescribeAggregateComplianceByConfigRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAggregateComplianceByConfigRulesResponse)
    Q_DISABLE_COPY(DescribeAggregateComplianceByConfigRulesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
