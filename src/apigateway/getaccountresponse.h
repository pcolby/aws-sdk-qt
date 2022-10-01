// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTRESPONSE_H
#define QTAWS_GETACCOUNTRESPONSE_H

#include "apigatewayresponse.h"
#include "getaccountrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetAccountResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetAccountResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetAccountResponse(const GetAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountResponse)
    Q_DISABLE_COPY(GetAccountResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
