// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REIMPORTAPIRESPONSE_H
#define QTAWS_REIMPORTAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "reimportapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ReimportApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT ReimportApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    ReimportApiResponse(const ReimportApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReimportApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReimportApiResponse)
    Q_DISABLE_COPY(ReimportApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
