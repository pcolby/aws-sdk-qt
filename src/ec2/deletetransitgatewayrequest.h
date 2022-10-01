// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYREQUEST_H
#define QTAWS_DELETETRANSITGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRequestPrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayRequest : public Ec2Request {

public:
    DeleteTransitGatewayRequest(const DeleteTransitGatewayRequest &other);
    DeleteTransitGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
