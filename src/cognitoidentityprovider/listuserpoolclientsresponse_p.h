// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLCLIENTSRESPONSE_P_H
#define QTAWS_LISTUSERPOOLCLIENTSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolClientsResponse;

class ListUserPoolClientsResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ListUserPoolClientsResponsePrivate(ListUserPoolClientsResponse * const q);

    void parseListUserPoolClientsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserPoolClientsResponse)
    Q_DISABLE_COPY(ListUserPoolClientsResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
