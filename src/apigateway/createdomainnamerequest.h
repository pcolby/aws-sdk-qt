// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINNAMEREQUEST_H
#define QTAWS_CREATEDOMAINNAMEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDomainNameRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateDomainNameRequest : public ApiGatewayRequest {

public:
    CreateDomainNameRequest(const CreateDomainNameRequest &other);
    CreateDomainNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainNameRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
