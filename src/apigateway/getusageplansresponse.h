// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANSRESPONSE_H
#define QTAWS_GETUSAGEPLANSRESPONSE_H

#include "apigatewayresponse.h"
#include "getusageplansrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlansResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlansResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetUsagePlansResponse(const GetUsagePlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsagePlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlansResponse)
    Q_DISABLE_COPY(GetUsagePlansResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
