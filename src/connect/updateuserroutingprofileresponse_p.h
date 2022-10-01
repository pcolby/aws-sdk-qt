// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERROUTINGPROFILERESPONSE_P_H
#define QTAWS_UPDATEUSERROUTINGPROFILERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserRoutingProfileResponse;

class UpdateUserRoutingProfileResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserRoutingProfileResponsePrivate(UpdateUserRoutingProfileResponse * const q);

    void parseUpdateUserRoutingProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserRoutingProfileResponse)
    Q_DISABLE_COPY(UpdateUserRoutingProfileResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
