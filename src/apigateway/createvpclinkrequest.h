// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCLINKREQUEST_H
#define QTAWS_CREATEVPCLINKREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateVpcLinkRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateVpcLinkRequest : public ApiGatewayRequest {

public:
    CreateVpcLinkRequest(const CreateVpcLinkRequest &other);
    CreateVpcLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcLinkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
