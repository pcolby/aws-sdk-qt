// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEREQUEST_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableRequestPrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteTableRequest : public Ec2Request {

public:
    DeleteLocalGatewayRouteTableRequest(const DeleteLocalGatewayRouteTableRequest &other);
    DeleteLocalGatewayRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
