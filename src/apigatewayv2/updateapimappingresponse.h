// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIMAPPINGRESPONSE_H
#define QTAWS_UPDATEAPIMAPPINGRESPONSE_H

#include "apigatewayv2response.h"
#include "updateapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiMappingResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateApiMappingResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    UpdateApiMappingResponse(const UpdateApiMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApiMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiMappingResponse)
    Q_DISABLE_COPY(UpdateApiMappingResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
