// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECARRIERGATEWAYREQUEST_H
#define QTAWS_CREATECARRIERGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateCarrierGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateCarrierGatewayRequest : public Ec2Request {

public:
    CreateCarrierGatewayRequest(const CreateCarrierGatewayRequest &other);
    CreateCarrierGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCarrierGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
