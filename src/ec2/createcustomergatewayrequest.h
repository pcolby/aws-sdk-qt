// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMERGATEWAYREQUEST_H
#define QTAWS_CREATECUSTOMERGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateCustomerGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateCustomerGatewayRequest : public Ec2Request {

public:
    CreateCustomerGatewayRequest(const CreateCustomerGatewayRequest &other);
    CreateCustomerGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomerGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
