// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOCALGATEWAYROUTEREQUEST_H
#define QTAWS_MODIFYLOCALGATEWAYROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyLocalGatewayRouteRequestPrivate;

class QTAWSEC2_EXPORT ModifyLocalGatewayRouteRequest : public Ec2Request {

public:
    ModifyLocalGatewayRouteRequest(const ModifyLocalGatewayRouteRequest &other);
    ModifyLocalGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLocalGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
