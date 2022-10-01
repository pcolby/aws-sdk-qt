// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOOLSRESPONSE_P_H
#define QTAWS_LISTUSERPOOLSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserPoolsResponse;

class ListUserPoolsResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ListUserPoolsResponsePrivate(ListUserPoolsResponse * const q);

    void parseListUserPoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserPoolsResponse)
    Q_DISABLE_COPY(ListUserPoolsResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
