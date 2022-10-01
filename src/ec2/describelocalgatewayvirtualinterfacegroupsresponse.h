// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACEGROUPSRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewayvirtualinterfacegroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfaceGroupsResponsePrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayVirtualInterfaceGroupsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLocalGatewayVirtualInterfaceGroupsResponse(const DescribeLocalGatewayVirtualInterfaceGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocalGatewayVirtualInterfaceGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayVirtualInterfaceGroupsResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayVirtualInterfaceGroupsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
