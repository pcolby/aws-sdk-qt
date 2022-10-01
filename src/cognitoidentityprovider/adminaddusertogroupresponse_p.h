// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINADDUSERTOGROUPRESPONSE_P_H
#define QTAWS_ADMINADDUSERTOGROUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminAddUserToGroupResponse;

class AdminAddUserToGroupResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminAddUserToGroupResponsePrivate(AdminAddUserToGroupResponse * const q);

    void parseAdminAddUserToGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminAddUserToGroupResponse)
    Q_DISABLE_COPY(AdminAddUserToGroupResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
