// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMERESPONSE_H
#define QTAWS_GETDOMAINNAMERESPONSE_H

#include "apigatewayv2response.h"
#include "getdomainnamerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDomainNameResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetDomainNameResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetDomainNameResponse(const GetDomainNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainNameResponse)
    Q_DISABLE_COPY(GetDomainNameResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
