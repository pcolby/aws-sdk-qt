// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCPEERINGCONNECTIONREQUEST_P_H
#define QTAWS_ACCEPTVPCPEERINGCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "acceptvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcPeeringConnectionRequest;

class AcceptVpcPeeringConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    AcceptVpcPeeringConnectionRequestPrivate(const Ec2Request::Action action,
                                   AcceptVpcPeeringConnectionRequest * const q);
    AcceptVpcPeeringConnectionRequestPrivate(const AcceptVpcPeeringConnectionRequestPrivate &other,
                                   AcceptVpcPeeringConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
