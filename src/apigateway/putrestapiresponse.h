// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESTAPIRESPONSE_H
#define QTAWS_PUTRESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "putrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class PutRestApiResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT PutRestApiResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    PutRestApiResponse(const PutRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRestApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRestApiResponse)
    Q_DISABLE_COPY(PutRestApiResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
