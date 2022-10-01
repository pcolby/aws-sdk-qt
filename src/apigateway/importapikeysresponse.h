// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIKEYSRESPONSE_H
#define QTAWS_IMPORTAPIKEYSRESPONSE_H

#include "apigatewayresponse.h"
#include "importapikeysrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportApiKeysResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT ImportApiKeysResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    ImportApiKeysResponse(const ImportApiKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportApiKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportApiKeysResponse)
    Q_DISABLE_COPY(ImportApiKeysResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
