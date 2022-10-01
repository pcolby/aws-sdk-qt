// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERSRESPONSE_H
#define QTAWS_GETAUTHORIZERSRESPONSE_H

#include "apigatewayresponse.h"
#include "getauthorizersrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetAuthorizersResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetAuthorizersResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetAuthorizersResponse(const GetAuthorizersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAuthorizersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizersResponse)
    Q_DISABLE_COPY(GetAuthorizersResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
