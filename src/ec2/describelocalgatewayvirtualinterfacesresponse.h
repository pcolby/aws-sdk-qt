// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYVIRTUALINTERFACESRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewayvirtualinterfacesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayVirtualInterfacesResponsePrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayVirtualInterfacesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLocalGatewayVirtualInterfacesResponse(const DescribeLocalGatewayVirtualInterfacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocalGatewayVirtualInterfacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayVirtualInterfacesResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayVirtualInterfacesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
