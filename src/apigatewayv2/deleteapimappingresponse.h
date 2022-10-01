// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIMAPPINGRESPONSE_H
#define QTAWS_DELETEAPIMAPPINGRESPONSE_H

#include "apigatewayv2response.h"
#include "deleteapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiMappingResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteApiMappingResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteApiMappingResponse(const DeleteApiMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApiMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiMappingResponse)
    Q_DISABLE_COPY(DeleteApiMappingResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
