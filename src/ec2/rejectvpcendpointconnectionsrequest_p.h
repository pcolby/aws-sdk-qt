// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCENDPOINTCONNECTIONSREQUEST_P_H
#define QTAWS_REJECTVPCENDPOINTCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "rejectvpcendpointconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcEndpointConnectionsRequest;

class RejectVpcEndpointConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    RejectVpcEndpointConnectionsRequestPrivate(const Ec2Request::Action action,
                                   RejectVpcEndpointConnectionsRequest * const q);
    RejectVpcEndpointConnectionsRequestPrivate(const RejectVpcEndpointConnectionsRequestPrivate &other,
                                   RejectVpcEndpointConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectVpcEndpointConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
