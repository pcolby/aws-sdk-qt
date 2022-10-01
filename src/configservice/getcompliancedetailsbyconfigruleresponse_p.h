// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULERESPONSE_P_H
#define QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByConfigRuleResponse;

class GetComplianceDetailsByConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetComplianceDetailsByConfigRuleResponsePrivate(GetComplianceDetailsByConfigRuleResponse * const q);

    void parseGetComplianceDetailsByConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailsByConfigRuleResponse)
    Q_DISABLE_COPY(GetComplianceDetailsByConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
