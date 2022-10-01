// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTAPIRESPONSE_H
#define QTAWS_EXPORTAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "exportapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ExportApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT ExportApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    ExportApiResponse(const ExportApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportApiResponse)
    Q_DISABLE_COPY(ExportApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
