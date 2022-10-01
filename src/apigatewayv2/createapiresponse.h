// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIRESPONSE_H
#define QTAWS_CREATEAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "createapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateApiResponse(const CreateApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiResponse)
    Q_DISABLE_COPY(CreateApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
