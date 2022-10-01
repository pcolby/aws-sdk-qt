// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPISRESPONSE_H
#define QTAWS_GETRESTAPISRESPONSE_H

#include "apigatewayresponse.h"
#include "getrestapisrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApisResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetRestApisResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetRestApisResponse(const GetRestApisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRestApisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRestApisResponse)
    Q_DISABLE_COPY(GetRestApisResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
