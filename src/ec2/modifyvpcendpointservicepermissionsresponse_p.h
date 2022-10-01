// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPERMISSIONSRESPONSE_P_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPERMISSIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePermissionsResponse;

class ModifyVpcEndpointServicePermissionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcEndpointServicePermissionsResponsePrivate(ModifyVpcEndpointServicePermissionsResponse * const q);

    void parseModifyVpcEndpointServicePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointServicePermissionsResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointServicePermissionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
