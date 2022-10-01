// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPERMISSIONSREQUEST_P_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPERMISSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcendpointservicepermissionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePermissionsRequest;

class ModifyVpcEndpointServicePermissionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcEndpointServicePermissionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcEndpointServicePermissionsRequest * const q);
    ModifyVpcEndpointServicePermissionsRequestPrivate(const ModifyVpcEndpointServicePermissionsRequestPrivate &other,
                                   ModifyVpcEndpointServicePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointServicePermissionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
