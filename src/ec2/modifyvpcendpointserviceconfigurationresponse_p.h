// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICECONFIGURATIONRESPONSE_P_H
#define QTAWS_MODIFYVPCENDPOINTSERVICECONFIGURATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServiceConfigurationResponse;

class ModifyVpcEndpointServiceConfigurationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcEndpointServiceConfigurationResponsePrivate(ModifyVpcEndpointServiceConfigurationResponse * const q);

    void parseModifyVpcEndpointServiceConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointServiceConfigurationResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointServiceConfigurationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
