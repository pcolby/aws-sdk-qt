// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESRESPONSE_P_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfacesResponse;

class DescribeLocalGatewayVirtualInterfacesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLocalGatewayVirtualInterfacesResponsePrivate(DescribeLocalGatewayVirtualInterfacesResponse * const q);

    void parseDescribeLocalGatewayVirtualInterfacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayVirtualInterfacesResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayVirtualInterfacesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
