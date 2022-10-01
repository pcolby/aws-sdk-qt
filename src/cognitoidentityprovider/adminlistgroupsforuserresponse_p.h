// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTGROUPSFORUSERRESPONSE_P_H
#define QTAWS_ADMINLISTGROUPSFORUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListGroupsForUserResponse;

class AdminListGroupsForUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminListGroupsForUserResponsePrivate(AdminListGroupsForUserResponse * const q);

    void parseAdminListGroupsForUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminListGroupsForUserResponse)
    Q_DISABLE_COPY(AdminListGroupsForUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
