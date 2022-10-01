// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEIPRULESRESPONSE_P_H
#define QTAWS_AUTHORIZEIPRULESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class AuthorizeIpRulesResponse;

class AuthorizeIpRulesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit AuthorizeIpRulesResponsePrivate(AuthorizeIpRulesResponse * const q);

    void parseAuthorizeIpRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeIpRulesResponse)
    Q_DISABLE_COPY(AuthorizeIpRulesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
