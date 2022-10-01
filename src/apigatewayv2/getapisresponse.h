// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPISRESPONSE_H
#define QTAWS_GETAPISRESPONSE_H

#include "apigatewayv2response.h"
#include "getapisrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApisResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApisResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetApisResponse(const GetApisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApisResponse)
    Q_DISABLE_COPY(GetApisResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
