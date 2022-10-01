// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFIGRULEDETAILEDSTATUSRESPONSE_P_H
#define QTAWS_GETORGANIZATIONCONFIGRULEDETAILEDSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConfigRuleDetailedStatusResponse;

class GetOrganizationConfigRuleDetailedStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetOrganizationConfigRuleDetailedStatusResponsePrivate(GetOrganizationConfigRuleDetailedStatusResponse * const q);

    void parseGetOrganizationConfigRuleDetailedStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOrganizationConfigRuleDetailedStatusResponse)
    Q_DISABLE_COPY(GetOrganizationConfigRuleDetailedStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
