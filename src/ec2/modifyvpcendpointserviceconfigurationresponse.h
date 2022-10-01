// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICECONFIGURATIONRESPONSE_H
#define QTAWS_MODIFYVPCENDPOINTSERVICECONFIGURATIONRESPONSE_H

#include "ec2response.h"
#include "modifyvpcendpointserviceconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServiceConfigurationResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointServiceConfigurationResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpcEndpointServiceConfigurationResponse(const ModifyVpcEndpointServiceConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpcEndpointServiceConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointServiceConfigurationResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointServiceConfigurationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
