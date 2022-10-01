// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServiceConfigurationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointServiceConfigurationsRequest : public Ec2Request {

public:
    DescribeVpcEndpointServiceConfigurationsRequest(const DescribeVpcEndpointServiceConfigurationsRequest &other);
    DescribeVpcEndpointServiceConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointServiceConfigurationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
