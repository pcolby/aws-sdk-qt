// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYREQUEST_P_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcendpointservicepayerresponsibilityrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePayerResponsibilityRequest;

class ModifyVpcEndpointServicePayerResponsibilityRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcEndpointServicePayerResponsibilityRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcEndpointServicePayerResponsibilityRequest * const q);
    ModifyVpcEndpointServicePayerResponsibilityRequestPrivate(const ModifyVpcEndpointServicePayerResponsibilityRequestPrivate &other,
                                   ModifyVpcEndpointServicePayerResponsibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointServicePayerResponsibilityRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
