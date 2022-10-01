// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicePermissionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointServicePermissionsRequest : public Ec2Request {

public:
    DescribeVpcEndpointServicePermissionsRequest(const DescribeVpcEndpointServicePermissionsRequest &other);
    DescribeVpcEndpointServicePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointServicePermissionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
