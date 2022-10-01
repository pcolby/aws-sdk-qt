// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILEPERMISSIONSRESPONSE_P_H
#define QTAWS_LISTSECURITYPROFILEPERMISSIONSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListSecurityProfilePermissionsResponse;

class ListSecurityProfilePermissionsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListSecurityProfilePermissionsResponsePrivate(ListSecurityProfilePermissionsResponse * const q);

    void parseListSecurityProfilePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecurityProfilePermissionsResponse)
    Q_DISABLE_COPY(ListSecurityProfilePermissionsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
