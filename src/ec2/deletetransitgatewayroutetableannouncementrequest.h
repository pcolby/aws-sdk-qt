// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableAnnouncementRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayRouteTableAnnouncementRequest : public Ec2Request {

public:
    DeleteTransitGatewayRouteTableAnnouncementRequest(const DeleteTransitGatewayRouteTableAnnouncementRequest &other);
    DeleteTransitGatewayRouteTableAnnouncementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayRouteTableAnnouncementRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
