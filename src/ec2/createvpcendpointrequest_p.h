// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTREQUEST_P_H
#define QTAWS_CREATEVPCENDPOINTREQUEST_P_H

#include "ec2request_p.h"
#include "createvpcendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointRequest;

class CreateVpcEndpointRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpcEndpointRequestPrivate(const Ec2Request::Action action,
                                   CreateVpcEndpointRequest * const q);
    CreateVpcEndpointRequestPrivate(const CreateVpcEndpointRequestPrivate &other,
                                   CreateVpcEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
