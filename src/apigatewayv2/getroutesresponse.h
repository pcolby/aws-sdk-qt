// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTESRESPONSE_H
#define QTAWS_GETROUTESRESPONSE_H

#include "apigatewayv2response.h"
#include "getroutesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRoutesResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRoutesResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetRoutesResponse(const GetRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoutesResponse)
    Q_DISABLE_COPY(GetRoutesResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
