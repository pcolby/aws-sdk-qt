// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCPEERINGCONNECTIONREQUEST_P_H
#define QTAWS_REJECTVPCPEERINGCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "rejectvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcPeeringConnectionRequest;

class RejectVpcPeeringConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    RejectVpcPeeringConnectionRequestPrivate(const Ec2Request::Action action,
                                   RejectVpcPeeringConnectionRequest * const q);
    RejectVpcPeeringConnectionRequestPrivate(const RejectVpcPeeringConnectionRequestPrivate &other,
                                   RejectVpcPeeringConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
