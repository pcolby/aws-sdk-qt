// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEREQUEST_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableRequestPrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteTableRequest : public Ec2Request {

public:
    CreateLocalGatewayRouteTableRequest(const CreateLocalGatewayRouteTableRequest &other);
    CreateLocalGatewayRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
