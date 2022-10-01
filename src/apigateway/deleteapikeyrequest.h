// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIKEYREQUEST_H
#define QTAWS_DELETEAPIKEYREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteApiKeyRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteApiKeyRequest : public ApiGatewayRequest {

public:
    DeleteApiKeyRequest(const DeleteApiKeyRequest &other);
    DeleteApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
