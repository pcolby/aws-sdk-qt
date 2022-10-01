// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCENDPOINTCONNECTIONSRESPONSE_P_H
#define QTAWS_ACCEPTVPCENDPOINTCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcEndpointConnectionsResponse;

class AcceptVpcEndpointConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AcceptVpcEndpointConnectionsResponsePrivate(AcceptVpcEndpointConnectionsResponse * const q);

    void parseAcceptVpcEndpointConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptVpcEndpointConnectionsResponse)
    Q_DISABLE_COPY(AcceptVpcEndpointConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
