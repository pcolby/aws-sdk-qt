// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableAnnouncementRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayRouteTableAnnouncementRequest : public Ec2Request {

public:
    CreateTransitGatewayRouteTableAnnouncementRequest(const CreateTransitGatewayRouteTableAnnouncementRequest &other);
    CreateTransitGatewayRouteTableAnnouncementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteTableAnnouncementRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
