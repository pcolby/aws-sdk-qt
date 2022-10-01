// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIKEYRESPONSE_H
#define QTAWS_UPDATEAPIKEYRESPONSE_H

#include "apigatewayresponse.h"
#include "updateapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateApiKeyResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateApiKeyResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateApiKeyResponse(const UpdateApiKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApiKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiKeyResponse)
    Q_DISABLE_COPY(UpdateApiKeyResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
