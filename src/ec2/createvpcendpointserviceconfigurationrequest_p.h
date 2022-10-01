// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONREQUEST_P_H

#include "ec2request_p.h"
#include "createvpcendpointserviceconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointServiceConfigurationRequest;

class CreateVpcEndpointServiceConfigurationRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpcEndpointServiceConfigurationRequestPrivate(const Ec2Request::Action action,
                                   CreateVpcEndpointServiceConfigurationRequest * const q);
    CreateVpcEndpointServiceConfigurationRequestPrivate(const CreateVpcEndpointServiceConfigurationRequestPrivate &other,
                                   CreateVpcEndpointServiceConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcEndpointServiceConfigurationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
