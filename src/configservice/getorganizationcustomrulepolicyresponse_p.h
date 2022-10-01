// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYRESPONSE_P_H
#define QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationCustomRulePolicyResponse;

class GetOrganizationCustomRulePolicyResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetOrganizationCustomRulePolicyResponsePrivate(GetOrganizationCustomRulePolicyResponse * const q);

    void parseGetOrganizationCustomRulePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOrganizationCustomRulePolicyResponse)
    Q_DISABLE_COPY(GetOrganizationCustomRulePolicyResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
