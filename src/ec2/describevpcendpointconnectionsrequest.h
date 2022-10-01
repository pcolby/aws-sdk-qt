// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointConnectionsRequest : public Ec2Request {

public:
    DescribeVpcEndpointConnectionsRequest(const DescribeVpcEndpointConnectionsRequest &other);
    DescribeVpcEndpointConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
