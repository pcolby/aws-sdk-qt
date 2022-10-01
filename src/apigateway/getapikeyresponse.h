// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYRESPONSE_H
#define QTAWS_GETAPIKEYRESPONSE_H

#include "apigatewayresponse.h"
#include "getapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeyResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetApiKeyResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetApiKeyResponse(const GetApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiKeyResponse)
    Q_DISABLE_COPY(GetApiKeyResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
