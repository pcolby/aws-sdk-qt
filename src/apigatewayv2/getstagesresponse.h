// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGESRESPONSE_H
#define QTAWS_GETSTAGESRESPONSE_H

#include "apigatewayv2response.h"
#include "getstagesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetStagesResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetStagesResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetStagesResponse(const GetStagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStagesResponse)
    Q_DISABLE_COPY(GetStagesResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
