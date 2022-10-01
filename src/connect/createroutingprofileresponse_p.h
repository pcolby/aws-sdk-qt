// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGPROFILERESPONSE_P_H
#define QTAWS_CREATEROUTINGPROFILERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateRoutingProfileResponse;

class CreateRoutingProfileResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateRoutingProfileResponsePrivate(CreateRoutingProfileResponse * const q);

    void parseCreateRoutingProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRoutingProfileResponse)
    Q_DISABLE_COPY(CreateRoutingProfileResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
