// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointServiceConfigurationResponse;

class CreateVpcEndpointServiceConfigurationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpcEndpointServiceConfigurationResponsePrivate(CreateVpcEndpointServiceConfigurationResponse * const q);

    void parseCreateVpcEndpointServiceConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcEndpointServiceConfigurationResponse)
    Q_DISABLE_COPY(CreateVpcEndpointServiceConfigurationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
