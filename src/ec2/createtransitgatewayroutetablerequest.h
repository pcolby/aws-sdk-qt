// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayRouteTableRequest : public Ec2Request {

public:
    CreateTransitGatewayRouteTableRequest(const CreateTransitGatewayRouteTableRequest &other);
    CreateTransitGatewayRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
