// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGRESPONSE_H
#define QTAWS_GETBASEPATHMAPPINGRESPONSE_H

#include "apigatewayresponse.h"
#include "getbasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetBasePathMappingResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetBasePathMappingResponse(const GetBasePathMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBasePathMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBasePathMappingResponse)
    Q_DISABLE_COPY(GetBasePathMappingResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
