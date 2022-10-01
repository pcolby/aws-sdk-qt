// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNCONNECTIONROUTERESPONSE_P_H
#define QTAWS_DELETEVPNCONNECTIONROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnConnectionRouteResponse;

class DeleteVpnConnectionRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpnConnectionRouteResponsePrivate(DeleteVpnConnectionRouteResponse * const q);

    void parseDeleteVpnConnectionRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpnConnectionRouteResponse)
    Q_DISABLE_COPY(DeleteVpnConnectionRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
