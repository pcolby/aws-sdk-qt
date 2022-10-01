// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBASEPATHMAPPINGRESPONSE_H
#define QTAWS_CREATEBASEPATHMAPPINGRESPONSE_H

#include "apigatewayresponse.h"
#include "createbasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateBasePathMappingResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateBasePathMappingResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateBasePathMappingResponse(const CreateBasePathMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBasePathMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBasePathMappingResponse)
    Q_DISABLE_COPY(CreateBasePathMappingResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
