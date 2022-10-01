// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSESRESPONSE_H
#define QTAWS_GETGATEWAYRESPONSESRESPONSE_H

#include "apigatewayresponse.h"
#include "getgatewayresponsesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponsesResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetGatewayResponsesResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetGatewayResponsesResponse(const GetGatewayResponsesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGatewayResponsesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayResponsesResponse)
    Q_DISABLE_COPY(GetGatewayResponsesResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
