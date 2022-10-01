// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKRESPONSE_H
#define QTAWS_GETVPCLINKRESPONSE_H

#include "apigatewayv2response.h"
#include "getvpclinkrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinkResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetVpcLinkResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetVpcLinkResponse(const GetVpcLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVpcLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpcLinkResponse)
    Q_DISABLE_COPY(GetVpcLinkResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
