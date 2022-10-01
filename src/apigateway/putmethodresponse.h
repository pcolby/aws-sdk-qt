// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODRESPONSE_H
#define QTAWS_PUTMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "putmethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT PutMethodResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    PutMethodResponse(const PutMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMethodResponse)
    Q_DISABLE_COPY(PutMethodResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
