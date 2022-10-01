// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTAPIRESPONSE_H
#define QTAWS_CREATERESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "createrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateRestApiResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateRestApiResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateRestApiResponse(const CreateRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRestApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRestApiResponse)
    Q_DISABLE_COPY(CreateRestApiResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
