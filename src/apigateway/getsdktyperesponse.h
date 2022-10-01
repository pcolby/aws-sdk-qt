// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPERESPONSE_H
#define QTAWS_GETSDKTYPERESPONSE_H

#include "apigatewayresponse.h"
#include "getsdktyperequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypeResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetSdkTypeResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetSdkTypeResponse(const GetSdkTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSdkTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSdkTypeResponse)
    Q_DISABLE_COPY(GetSdkTypeResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
