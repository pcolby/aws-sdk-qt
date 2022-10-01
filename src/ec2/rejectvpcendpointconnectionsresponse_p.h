// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCENDPOINTCONNECTIONSRESPONSE_P_H
#define QTAWS_REJECTVPCENDPOINTCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcEndpointConnectionsResponse;

class RejectVpcEndpointConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RejectVpcEndpointConnectionsResponsePrivate(RejectVpcEndpointConnectionsResponse * const q);

    void parseRejectVpcEndpointConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectVpcEndpointConnectionsResponse)
    Q_DISABLE_COPY(RejectVpcEndpointConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
