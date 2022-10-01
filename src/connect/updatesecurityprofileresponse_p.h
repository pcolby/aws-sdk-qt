// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYPROFILERESPONSE_P_H
#define QTAWS_UPDATESECURITYPROFILERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateSecurityProfileResponse;

class UpdateSecurityProfileResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateSecurityProfileResponsePrivate(UpdateSecurityProfileResponse * const q);

    void parseUpdateSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityProfileResponse)
    Q_DISABLE_COPY(UpdateSecurityProfileResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
