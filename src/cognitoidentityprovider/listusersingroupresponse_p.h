// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSINGROUPRESPONSE_P_H
#define QTAWS_LISTUSERSINGROUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUsersInGroupResponse;

class ListUsersInGroupResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ListUsersInGroupResponsePrivate(ListUsersInGroupResponse * const q);

    void parseListUsersInGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsersInGroupResponse)
    Q_DISABLE_COPY(ListUsersInGroupResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
