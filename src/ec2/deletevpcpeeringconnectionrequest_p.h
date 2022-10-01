// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGCONNECTIONREQUEST_P_H
#define QTAWS_DELETEVPCPEERINGCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcPeeringConnectionRequest;

class DeleteVpcPeeringConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpcPeeringConnectionRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpcPeeringConnectionRequest * const q);
    DeleteVpcPeeringConnectionRequestPrivate(const DeleteVpcPeeringConnectionRequestPrivate &other,
                                   DeleteVpcPeeringConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
