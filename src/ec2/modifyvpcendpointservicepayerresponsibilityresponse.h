// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYRESPONSE_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYRESPONSE_H

#include "ec2response.h"
#include "modifyvpcendpointservicepayerresponsibilityrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePayerResponsibilityResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointServicePayerResponsibilityResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpcEndpointServicePayerResponsibilityResponse(const ModifyVpcEndpointServicePayerResponsibilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpcEndpointServicePayerResponsibilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointServicePayerResponsibilityResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointServicePayerResponsibilityResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
