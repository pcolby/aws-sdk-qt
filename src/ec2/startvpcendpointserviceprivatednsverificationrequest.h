// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONREQUEST_H
#define QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class StartVpcEndpointServicePrivateDnsVerificationRequestPrivate;

class QTAWSEC2_EXPORT StartVpcEndpointServicePrivateDnsVerificationRequest : public Ec2Request {

public:
    StartVpcEndpointServicePrivateDnsVerificationRequest(const StartVpcEndpointServicePrivateDnsVerificationRequest &other);
    StartVpcEndpointServicePrivateDnsVerificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartVpcEndpointServicePrivateDnsVerificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
