// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKRESPONSE_H
#define QTAWS_GETSDKRESPONSE_H

#include "apigatewayresponse.h"
#include "getsdkrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetSdkResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetSdkResponse(const GetSdkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSdkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSdkResponse)
    Q_DISABLE_COPY(GetSdkResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
