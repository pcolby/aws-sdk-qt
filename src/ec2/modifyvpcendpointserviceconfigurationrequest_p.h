// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICECONFIGURATIONREQUEST_P_H
#define QTAWS_MODIFYVPCENDPOINTSERVICECONFIGURATIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcendpointserviceconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServiceConfigurationRequest;

class ModifyVpcEndpointServiceConfigurationRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcEndpointServiceConfigurationRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcEndpointServiceConfigurationRequest * const q);
    ModifyVpcEndpointServiceConfigurationRequestPrivate(const ModifyVpcEndpointServiceConfigurationRequestPrivate &other,
                                   ModifyVpcEndpointServiceConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointServiceConfigurationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
