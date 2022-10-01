// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEGRESSONLYINTERNETGATEWAYREQUEST_H
#define QTAWS_CREATEEGRESSONLYINTERNETGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateEgressOnlyInternetGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateEgressOnlyInternetGatewayRequest : public Ec2Request {

public:
    CreateEgressOnlyInternetGatewayRequest(const CreateEgressOnlyInternetGatewayRequest &other);
    CreateEgressOnlyInternetGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEgressOnlyInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
