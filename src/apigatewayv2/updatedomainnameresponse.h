// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMERESPONSE_H
#define QTAWS_UPDATEDOMAINNAMERESPONSE_H

#include "apigatewayv2response.h"
#include "updatedomainnamerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDomainNameResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateDomainNameResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    UpdateDomainNameResponse(const UpdateDomainNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainNameResponse)
    Q_DISABLE_COPY(UpdateDomainNameResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
