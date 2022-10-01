// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTSERVICECONFIGURATIONSRESPONSE_P_H
#define QTAWS_DELETEVPCENDPOINTSERVICECONFIGURATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointServiceConfigurationsResponse;

class DeleteVpcEndpointServiceConfigurationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpcEndpointServiceConfigurationsResponsePrivate(DeleteVpcEndpointServiceConfigurationsResponse * const q);

    void parseDeleteVpcEndpointServiceConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcEndpointServiceConfigurationsResponse)
    Q_DISABLE_COPY(DeleteVpcEndpointServiceConfigurationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
