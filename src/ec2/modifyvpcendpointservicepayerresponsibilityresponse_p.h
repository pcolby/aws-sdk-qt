// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYRESPONSE_P_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePayerResponsibilityResponse;

class ModifyVpcEndpointServicePayerResponsibilityResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcEndpointServicePayerResponsibilityResponsePrivate(ModifyVpcEndpointServicePayerResponsibilityResponse * const q);

    void parseModifyVpcEndpointServicePayerResponsibilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointServicePayerResponsibilityResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointServicePayerResponsibilityResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
