// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTEREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayRouteRequest : public Ec2Request {

public:
    DeleteTransitGatewayRouteRequest(const DeleteTransitGatewayRouteRequest &other);
    DeleteTransitGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
