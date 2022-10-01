// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTAUTHORIZATIONDETAILSRESPONSE_P_H
#define QTAWS_GETACCOUNTAUTHORIZATIONDETAILSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetAccountAuthorizationDetailsResponse;

class GetAccountAuthorizationDetailsResponsePrivate : public IamResponsePrivate {

public:

    explicit GetAccountAuthorizationDetailsResponsePrivate(GetAccountAuthorizationDetailsResponse * const q);

    void parseGetAccountAuthorizationDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountAuthorizationDetailsResponse)
    Q_DISABLE_COPY(GetAccountAuthorizationDetailsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
