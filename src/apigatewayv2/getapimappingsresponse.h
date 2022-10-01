// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGSRESPONSE_H
#define QTAWS_GETAPIMAPPINGSRESPONSE_H

#include "apigatewayv2response.h"
#include "getapimappingsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingsResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApiMappingsResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetApiMappingsResponse(const GetApiMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiMappingsResponse)
    Q_DISABLE_COPY(GetApiMappingsResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
