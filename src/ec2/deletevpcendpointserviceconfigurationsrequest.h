// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_H
#define QTAWS_DELETEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointServiceConfigurationsRequestPrivate;

class QTAWSEC2_EXPORT DeleteVpcEndpointServiceConfigurationsRequest : public Ec2Request {

public:
    DeleteVpcEndpointServiceConfigurationsRequest(const DeleteVpcEndpointServiceConfigurationsRequest &other);
    DeleteVpcEndpointServiceConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcEndpointServiceConfigurationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
