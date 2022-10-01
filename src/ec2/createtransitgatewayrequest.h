// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayRequest : public Ec2Request {

public:
    CreateTransitGatewayRequest(const CreateTransitGatewayRequest &other);
    CreateTransitGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
