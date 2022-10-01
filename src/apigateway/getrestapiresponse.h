// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPIRESPONSE_H
#define QTAWS_GETRESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "getrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApiResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetRestApiResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetRestApiResponse(const GetRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRestApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRestApiResponse)
    Q_DISABLE_COPY(GetRestApiResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
