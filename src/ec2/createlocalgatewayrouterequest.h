// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTEREQUEST_H
#define QTAWS_CREATELOCALGATEWAYROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteRequestPrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteRequest : public Ec2Request {

public:
    CreateLocalGatewayRouteRequest(const CreateLocalGatewayRouteRequest &other);
    CreateLocalGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
