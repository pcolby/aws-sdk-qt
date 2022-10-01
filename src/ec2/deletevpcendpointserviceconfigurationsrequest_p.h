// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_P_H
#define QTAWS_DELETEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpcendpointserviceconfigurationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointServiceConfigurationsRequest;

class DeleteVpcEndpointServiceConfigurationsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpcEndpointServiceConfigurationsRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpcEndpointServiceConfigurationsRequest * const q);
    DeleteVpcEndpointServiceConfigurationsRequestPrivate(const DeleteVpcEndpointServiceConfigurationsRequestPrivate &other,
                                   DeleteVpcEndpointServiceConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcEndpointServiceConfigurationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
