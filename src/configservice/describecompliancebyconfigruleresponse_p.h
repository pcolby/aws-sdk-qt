// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULERESPONSE_P_H
#define QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByConfigRuleResponse;

class DescribeComplianceByConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeComplianceByConfigRuleResponsePrivate(DescribeComplianceByConfigRuleResponse * const q);

    void parseDescribeComplianceByConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComplianceByConfigRuleResponse)
    Q_DISABLE_COPY(DescribeComplianceByConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
