// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayRouteTableRequestPrivate;

class QTAWSEC2_EXPORT DisassociateTransitGatewayRouteTableRequest : public Ec2Request {

public:
    DisassociateTransitGatewayRouteTableRequest(const DisassociateTransitGatewayRouteTableRequest &other);
    DisassociateTransitGatewayRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
