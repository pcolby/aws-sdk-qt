// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPERMISSIONSRESPONSE_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPERMISSIONSRESPONSE_H

#include "ec2response.h"
#include "modifyvpcendpointservicepermissionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePermissionsResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointServicePermissionsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpcEndpointServicePermissionsResponse(const ModifyVpcEndpointServicePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpcEndpointServicePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointServicePermissionsResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointServicePermissionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
