// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENATGATEWAYREQUEST_H
#define QTAWS_CREATENATGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateNatGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateNatGatewayRequest : public Ec2Request {

public:
    CreateNatGatewayRequest(const CreateNatGatewayRequest &other);
    CreateNatGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNatGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
