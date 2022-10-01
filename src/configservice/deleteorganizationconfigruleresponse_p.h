// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFIGRULERESPONSE_P_H
#define QTAWS_DELETEORGANIZATIONCONFIGRULERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConfigRuleResponse;

class DeleteOrganizationConfigRuleResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteOrganizationConfigRuleResponsePrivate(DeleteOrganizationConfigRuleResponse * const q);

    void parseDeleteOrganizationConfigRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationConfigRuleResponse)
    Q_DISABLE_COPY(DeleteOrganizationConfigRuleResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
