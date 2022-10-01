// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNENDPOINTRESPONSE_P_H
#define QTAWS_CREATECLIENTVPNENDPOINTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnEndpointResponse;

class CreateClientVpnEndpointResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateClientVpnEndpointResponsePrivate(CreateClientVpnEndpointResponse * const q);

    void parseCreateClientVpnEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClientVpnEndpointResponse)
    Q_DISABLE_COPY(CreateClientVpnEndpointResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
