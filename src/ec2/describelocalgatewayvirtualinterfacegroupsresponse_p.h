// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfaceGroupsResponse;

class DescribeLocalGatewayVirtualInterfaceGroupsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLocalGatewayVirtualInterfaceGroupsResponsePrivate(DescribeLocalGatewayVirtualInterfaceGroupsResponse * const q);

    void parseDescribeLocalGatewayVirtualInterfaceGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayVirtualInterfaceGroupsResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayVirtualInterfaceGroupsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
