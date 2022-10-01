// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICESREQUEST_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicesRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointServicesRequest : public Ec2Request {

public:
    DescribeVpcEndpointServicesRequest(const DescribeVpcEndpointServicesRequest &other);
    DescribeVpcEndpointServicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointServicesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
