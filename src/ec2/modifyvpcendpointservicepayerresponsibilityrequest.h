// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYREQUEST_H
#define QTAWS_MODIFYVPCENDPOINTSERVICEPAYERRESPONSIBILITYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointServicePayerResponsibilityRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointServicePayerResponsibilityRequest : public Ec2Request {

public:
    ModifyVpcEndpointServicePayerResponsibilityRequest(const ModifyVpcEndpointServicePayerResponsibilityRequest &other);
    ModifyVpcEndpointServicePayerResponsibilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointServicePayerResponsibilityRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
