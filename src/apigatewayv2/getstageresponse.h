// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGERESPONSE_H
#define QTAWS_GETSTAGERESPONSE_H

#include "apigatewayv2response.h"
#include "getstagerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetStageResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetStageResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetStageResponse(const GetStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStageResponse)
    Q_DISABLE_COPY(GetStageResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
