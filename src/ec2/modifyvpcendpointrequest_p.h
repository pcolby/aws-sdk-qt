// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTREQUEST_P_H
#define QTAWS_MODIFYVPCENDPOINTREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointRequest;

class ModifyVpcEndpointRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcEndpointRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcEndpointRequest * const q);
    ModifyVpcEndpointRequestPrivate(const ModifyVpcEndpointRequestPrivate &other,
                                   ModifyVpcEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
