// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETHODRESPONSE_H
#define QTAWS_GETMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "getmethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetMethodResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetMethodResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetMethodResponse(const GetMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMethodResponse)
    Q_DISABLE_COPY(GetMethodResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
