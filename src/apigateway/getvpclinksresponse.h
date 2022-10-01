// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKSRESPONSE_H
#define QTAWS_GETVPCLINKSRESPONSE_H

#include "apigatewayresponse.h"
#include "getvpclinksrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetVpcLinksResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetVpcLinksResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetVpcLinksResponse(const GetVpcLinksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVpcLinksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpcLinksResponse)
    Q_DISABLE_COPY(GetVpcLinksResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
