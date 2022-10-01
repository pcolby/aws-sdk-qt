// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSECURITYPROFILESRESPONSE_P_H
#define QTAWS_UPDATEUSERSECURITYPROFILESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserSecurityProfilesResponse;

class UpdateUserSecurityProfilesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserSecurityProfilesResponsePrivate(UpdateUserSecurityProfilesResponse * const q);

    void parseUpdateUserSecurityProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserSecurityProfilesResponse)
    Q_DISABLE_COPY(UpdateUserSecurityProfilesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
