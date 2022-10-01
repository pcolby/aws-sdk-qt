// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONRESPONSE_H
#define QTAWS_STARTVPCENDPOINTSERVICEPRIVATEDNSVERIFICATIONRESPONSE_H

#include "ec2response.h"
#include "startvpcendpointserviceprivatednsverificationrequest.h"

namespace QtAws {
namespace Ec2 {

class StartVpcEndpointServicePrivateDnsVerificationResponsePrivate;

class QTAWSEC2_EXPORT StartVpcEndpointServicePrivateDnsVerificationResponse : public Ec2Response {
    Q_OBJECT

public:
    StartVpcEndpointServicePrivateDnsVerificationResponse(const StartVpcEndpointServicePrivateDnsVerificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartVpcEndpointServicePrivateDnsVerificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartVpcEndpointServicePrivateDnsVerificationResponse)
    Q_DISABLE_COPY(StartVpcEndpointServicePrivateDnsVerificationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
