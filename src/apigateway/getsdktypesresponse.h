// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPESRESPONSE_H
#define QTAWS_GETSDKTYPESRESPONSE_H

#include "apigatewayresponse.h"
#include "getsdktypesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypesResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetSdkTypesResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetSdkTypesResponse(const GetSdkTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSdkTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSdkTypesResponse)
    Q_DISABLE_COPY(GetSdkTypesResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
