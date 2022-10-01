// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGRESPONSE_H
#define QTAWS_GETAPIMAPPINGRESPONSE_H

#include "apigatewayv2response.h"
#include "getapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApiMappingResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetApiMappingResponse(const GetApiMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiMappingResponse)
    Q_DISABLE_COPY(GetApiMappingResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
