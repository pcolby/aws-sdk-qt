// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONREQUEST_P_H
#define QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONREQUEST_P_H

#include "ec2request_p.h"
#include "startvpcendpointserviceprivatednsverificationrequest.h"

namespace QtAws {
namespace Ec2 {

class StartVpcEndpointServicePrivateDnsVerificationRequest;

class StartVpcEndpointServicePrivateDnsVerificationRequestPrivate : public Ec2RequestPrivate {

public:
    StartVpcEndpointServicePrivateDnsVerificationRequestPrivate(const Ec2Request::Action action,
                                   StartVpcEndpointServicePrivateDnsVerificationRequest * const q);
    StartVpcEndpointServicePrivateDnsVerificationRequestPrivate(const StartVpcEndpointServicePrivateDnsVerificationRequestPrivate &other,
                                   StartVpcEndpointServicePrivateDnsVerificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartVpcEndpointServicePrivateDnsVerificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
