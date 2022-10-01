// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGCONNECTIONREQUEST_P_H
#define QTAWS_CREATEVPCPEERINGCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "createvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcPeeringConnectionRequest;

class CreateVpcPeeringConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpcPeeringConnectionRequestPrivate(const Ec2Request::Action action,
                                   CreateVpcPeeringConnectionRequest * const q);
    CreateVpcPeeringConnectionRequestPrivate(const CreateVpcPeeringConnectionRequestPrivate &other,
                                   CreateVpcPeeringConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
