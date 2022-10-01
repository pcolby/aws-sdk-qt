// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYSRESPONSE_H
#define QTAWS_GETUSAGEPLANKEYSRESPONSE_H

#include "apigatewayresponse.h"
#include "getusageplankeysrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeysResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlanKeysResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetUsagePlanKeysResponse(const GetUsagePlanKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsagePlanKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlanKeysResponse)
    Q_DISABLE_COPY(GetUsagePlanKeysResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
