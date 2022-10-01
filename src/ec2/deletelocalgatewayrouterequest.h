// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTEREQUEST_H
#define QTAWS_DELETELOCALGATEWAYROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteRequestPrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteRequest : public Ec2Request {

public:
    DeleteLocalGatewayRouteRequest(const DeleteLocalGatewayRouteRequest &other);
    DeleteLocalGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
