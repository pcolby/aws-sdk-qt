// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRuleEvaluationStatusResponse;

class DescribeConfigRuleEvaluationStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConfigRuleEvaluationStatusResponsePrivate(DescribeConfigRuleEvaluationStatusResponse * const q);

    void parseDescribeConfigRuleEvaluationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigRuleEvaluationStatusResponse)
    Q_DISABLE_COPY(DescribeConfigRuleEvaluationStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
