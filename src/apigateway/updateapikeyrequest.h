// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIKEYREQUEST_H
#define QTAWS_UPDATEAPIKEYREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateApiKeyRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateApiKeyRequest : public ApiGatewayRequest {

public:
    UpdateApiKeyRequest(const UpdateApiKeyRequest &other);
    UpdateApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
