// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTORGANIZATIONCONFIGRULERESPONSE_P_H
#define QTAWS_PUTORGANIZATIONCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutOrganizationConfigRuleResponse;

class PutOrganizationConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutOrganizationConfigRuleResponsePrivate(PutOrganizationConfigRuleResponse * const q);

    void parsePutOrganizationConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutOrganizationConfigRuleResponse)
    Q_DISABLE_COPY(PutOrganizationConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
