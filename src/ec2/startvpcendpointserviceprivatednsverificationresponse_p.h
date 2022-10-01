// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONRESPONSE_P_H
#define QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class StartVpcEndpointServicePrivateDnsVerificationResponse;

class StartVpcEndpointServicePrivateDnsVerificationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit StartVpcEndpointServicePrivateDnsVerificationResponsePrivate(StartVpcEndpointServicePrivateDnsVerificationResponse * const q);

    void parseStartVpcEndpointServicePrivateDnsVerificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartVpcEndpointServicePrivateDnsVerificationResponse)
    Q_DISABLE_COPY(StartVpcEndpointServicePrivateDnsVerificationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
