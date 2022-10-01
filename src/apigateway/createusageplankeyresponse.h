// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANKEYRESPONSE_H
#define QTAWS_CREATEUSAGEPLANKEYRESPONSE_H

#include "apigatewayresponse.h"
#include "createusageplankeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanKeyResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateUsagePlanKeyResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateUsagePlanKeyResponse(const CreateUsagePlanKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUsagePlanKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsagePlanKeyResponse)
    Q_DISABLE_COPY(CreateUsagePlanKeyResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
