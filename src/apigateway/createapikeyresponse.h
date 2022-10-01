// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIKEYRESPONSE_H
#define QTAWS_CREATEAPIKEYRESPONSE_H

#include "apigatewayresponse.h"
#include "createapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateApiKeyResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateApiKeyResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateApiKeyResponse(const CreateApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiKeyResponse)
    Q_DISABLE_COPY(CreateApiKeyResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
