// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIRESPONSE_H
#define QTAWS_UPDATEAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "updateapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    UpdateApiResponse(const UpdateApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiResponse)
    Q_DISABLE_COPY(UpdateApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
