// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNROUTERESPONSE_P_H
#define QTAWS_CREATECLIENTVPNROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnRouteResponse;

class CreateClientVpnRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateClientVpnRouteResponsePrivate(CreateClientVpnRouteResponse * const q);

    void parseCreateClientVpnRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClientVpnRouteResponse)
    Q_DISABLE_COPY(CreateClientVpnRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
