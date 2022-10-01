// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTUSERAUTHEVENTSRESPONSE_P_H
#define QTAWS_ADMINLISTUSERAUTHEVENTSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListUserAuthEventsResponse;

class AdminListUserAuthEventsResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminListUserAuthEventsResponsePrivate(AdminListUserAuthEventsResponse * const q);

    void parseAdminListUserAuthEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminListUserAuthEventsResponse)
    Q_DISABLE_COPY(AdminListUserAuthEventsResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
