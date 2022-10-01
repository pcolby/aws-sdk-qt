// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLEREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayRouteTableRequest : public Ec2Request {

public:
    DeleteTransitGatewayRouteTableRequest(const DeleteTransitGatewayRouteTableRequest &other);
    DeleteTransitGatewayRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
