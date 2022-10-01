// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIMAPPINGRESPONSE_H
#define QTAWS_CREATEAPIMAPPINGRESPONSE_H

#include "apigatewayv2response.h"
#include "createapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiMappingResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateApiMappingResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateApiMappingResponse(const CreateApiMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApiMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiMappingResponse)
    Q_DISABLE_COPY(CreateApiMappingResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
