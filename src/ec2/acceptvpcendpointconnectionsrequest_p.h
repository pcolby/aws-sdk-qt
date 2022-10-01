// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCENDPOINTCONNECTIONSREQUEST_P_H
#define QTAWS_ACCEPTVPCENDPOINTCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "acceptvpcendpointconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcEndpointConnectionsRequest;

class AcceptVpcEndpointConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    AcceptVpcEndpointConnectionsRequestPrivate(const Ec2Request::Action action,
                                   AcceptVpcEndpointConnectionsRequest * const q);
    AcceptVpcEndpointConnectionsRequestPrivate(const AcceptVpcEndpointConnectionsRequestPrivate &other,
                                   AcceptVpcEndpointConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptVpcEndpointConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
