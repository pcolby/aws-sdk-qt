// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYRESPONSE_H
#define QTAWS_GETUSAGEPLANKEYRESPONSE_H

#include "apigatewayresponse.h"
#include "getusageplankeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeyResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlanKeyResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetUsagePlanKeyResponse(const GetUsagePlanKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsagePlanKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlanKeyResponse)
    Q_DISABLE_COPY(GetUsagePlanKeyResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
