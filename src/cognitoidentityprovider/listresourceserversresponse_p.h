// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESERVERSRESPONSE_P_H
#define QTAWS_LISTRESOURCESERVERSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListResourceServersResponse;

class ListResourceServersResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ListResourceServersResponsePrivate(ListResourceServersResponse * const q);

    void parseListResourceServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceServersResponse)
    Q_DISABLE_COPY(ListResourceServersResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
