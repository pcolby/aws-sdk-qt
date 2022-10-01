// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYCONNECTREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYCONNECTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayConnectRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayConnectRequest : public Ec2Request {

public:
    CreateTransitGatewayConnectRequest(const CreateTransitGatewayConnectRequest &other);
    CreateTransitGatewayConnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayConnectRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
