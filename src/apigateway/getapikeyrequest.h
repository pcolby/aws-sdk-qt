// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYREQUEST_H
#define QTAWS_GETAPIKEYREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeyRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetApiKeyRequest : public ApiGatewayRequest {

public:
    GetApiKeyRequest(const GetApiKeyRequest &other);
    GetApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
