// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGERESPONSE_H
#define QTAWS_GETUSAGERESPONSE_H

#include "apigatewayresponse.h"
#include "getusagerequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsageResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsageResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetUsageResponse(const GetUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageResponse)
    Q_DISABLE_COPY(GetUsageResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
