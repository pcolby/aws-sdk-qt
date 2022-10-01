// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESTAPIRESPONSE_H
#define QTAWS_IMPORTRESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "importrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportRestApiResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT ImportRestApiResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    ImportRestApiResponse(const ImportRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportRestApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportRestApiResponse)
    Q_DISABLE_COPY(ImportRestApiResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
