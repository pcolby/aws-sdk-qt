// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMESRESPONSE_H
#define QTAWS_GETDOMAINNAMESRESPONSE_H

#include "apigatewayresponse.h"
#include "getdomainnamesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDomainNamesResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetDomainNamesResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetDomainNamesResponse(const GetDomainNamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainNamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainNamesResponse)
    Q_DISABLE_COPY(GetDomainNamesResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
