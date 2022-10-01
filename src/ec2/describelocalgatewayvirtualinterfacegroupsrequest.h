// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSREQUEST_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfaceGroupsRequestPrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayVirtualInterfaceGroupsRequest : public Ec2Request {

public:
    DescribeLocalGatewayVirtualInterfaceGroupsRequest(const DescribeLocalGatewayVirtualInterfaceGroupsRequest &other);
    DescribeLocalGatewayVirtualInterfaceGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayVirtualInterfaceGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
