// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONROUTERESPONSE_P_H
#define QTAWS_CREATEVPNCONNECTIONROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionRouteResponse;

class CreateVpnConnectionRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpnConnectionRouteResponsePrivate(CreateVpnConnectionRouteResponse * const q);

    void parseCreateVpnConnectionRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpnConnectionRouteResponse)
    Q_DISABLE_COPY(CreateVpnConnectionRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
