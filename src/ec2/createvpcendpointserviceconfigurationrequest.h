// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONREQUEST_H
#define QTAWS_CREATEVPCENDPOINTSERVICECONFIGURATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointServiceConfigurationRequestPrivate;

class QTAWSEC2_EXPORT CreateVpcEndpointServiceConfigurationRequest : public Ec2Request {

public:
    CreateVpcEndpointServiceConfigurationRequest(const CreateVpcEndpointServiceConfigurationRequest &other);
    CreateVpcEndpointServiceConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcEndpointServiceConfigurationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
