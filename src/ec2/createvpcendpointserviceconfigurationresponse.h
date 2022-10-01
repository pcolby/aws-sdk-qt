// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONRESPONSE_H
#define QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONRESPONSE_H

#include "ec2response.h"
#include "createvpcendpointserviceconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointServiceConfigurationResponsePrivate;

class QTAWSEC2_EXPORT CreateVpcEndpointServiceConfigurationResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpcEndpointServiceConfigurationResponse(const CreateVpcEndpointServiceConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcEndpointServiceConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcEndpointServiceConfigurationResponse)
    Q_DISABLE_COPY(CreateVpcEndpointServiceConfigurationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
