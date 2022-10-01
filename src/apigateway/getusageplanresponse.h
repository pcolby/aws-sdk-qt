// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANRESPONSE_H
#define QTAWS_GETUSAGEPLANRESPONSE_H

#include "apigatewayresponse.h"
#include "getusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlanResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetUsagePlanResponse(const GetUsagePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsagePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlanResponse)
    Q_DISABLE_COPY(GetUsagePlanResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
