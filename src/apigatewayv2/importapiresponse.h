// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIRESPONSE_H
#define QTAWS_IMPORTAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "importapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ImportApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT ImportApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    ImportApiResponse(const ImportApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportApiResponse)
    Q_DISABLE_COPY(ImportApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
