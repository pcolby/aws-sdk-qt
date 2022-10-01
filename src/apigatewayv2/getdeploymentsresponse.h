// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSRESPONSE_H
#define QTAWS_GETDEPLOYMENTSRESPONSE_H

#include "apigatewayv2response.h"
#include "getdeploymentsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentsResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetDeploymentsResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetDeploymentsResponse(const GetDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentsResponse)
    Q_DISABLE_COPY(GetDeploymentsResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
