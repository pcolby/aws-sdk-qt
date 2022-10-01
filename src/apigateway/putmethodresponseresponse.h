// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODRESPONSERESPONSE_H
#define QTAWS_PUTMETHODRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "putmethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT PutMethodResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    PutMethodResponseResponse(const PutMethodResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMethodResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMethodResponseResponse)
    Q_DISABLE_COPY(PutMethodResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
