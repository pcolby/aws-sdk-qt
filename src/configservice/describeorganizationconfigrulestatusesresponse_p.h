// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRuleStatusesResponse;

class DescribeOrganizationConfigRuleStatusesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeOrganizationConfigRuleStatusesResponsePrivate(DescribeOrganizationConfigRuleStatusesResponse * const q);

    void parseDescribeOrganizationConfigRuleStatusesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigRuleStatusesResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigRuleStatusesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
