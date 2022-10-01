// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESREQUEST_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfacesRequestPrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayVirtualInterfacesRequest : public Ec2Request {

public:
    DescribeLocalGatewayVirtualInterfacesRequest(const DescribeLocalGatewayVirtualInterfacesRequest &other);
    DescribeLocalGatewayVirtualInterfacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayVirtualInterfacesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
