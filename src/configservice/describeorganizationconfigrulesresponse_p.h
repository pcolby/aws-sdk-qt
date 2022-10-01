// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRulesResponse;

class DescribeOrganizationConfigRulesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeOrganizationConfigRulesResponsePrivate(DescribeOrganizationConfigRulesResponse * const q);

    void parseDescribeOrganizationConfigRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigRulesResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigRulesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
