// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIRESPONSE_H
#define QTAWS_GETAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "getapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetApiResponse(const GetApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiResponse)
    Q_DISABLE_COPY(GetApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
