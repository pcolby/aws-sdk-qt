// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTDEVICESRESPONSE_P_H
#define QTAWS_ADMINLISTDEVICESRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListDevicesResponse;

class AdminListDevicesResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminListDevicesResponsePrivate(AdminListDevicesResponse * const q);

    void parseAdminListDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminListDevicesResponse)
    Q_DISABLE_COPY(AdminListDevicesResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
