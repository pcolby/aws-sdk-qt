// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMERGATEWAYREQUEST_H
#define QTAWS_DELETECUSTOMERGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteCustomerGatewayRequestPrivate;

class QTAWSEC2_EXPORT DeleteCustomerGatewayRequest : public Ec2Request {

public:
    DeleteCustomerGatewayRequest(const DeleteCustomerGatewayRequest &other);
    DeleteCustomerGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomerGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
