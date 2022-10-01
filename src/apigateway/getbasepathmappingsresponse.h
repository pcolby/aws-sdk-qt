// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGSRESPONSE_H
#define QTAWS_GETBASEPATHMAPPINGSRESPONSE_H

#include "apigatewayresponse.h"
#include "getbasepathmappingsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingsResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetBasePathMappingsResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetBasePathMappingsResponse(const GetBasePathMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBasePathMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBasePathMappingsResponse)
    Q_DISABLE_COPY(GetBasePathMappingsResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
