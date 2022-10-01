// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNGATEWAYREQUEST_H
#define QTAWS_CREATEVPNGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateVpnGatewayRequest : public Ec2Request {

public:
    CreateVpnGatewayRequest(const CreateVpnGatewayRequest &other);
    CreateVpnGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
