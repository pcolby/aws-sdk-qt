// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINNAMERESPONSE_H
#define QTAWS_CREATEDOMAINNAMERESPONSE_H

#include "apigatewayresponse.h"
#include "createdomainnamerequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDomainNameResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateDomainNameResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateDomainNameResponse(const CreateDomainNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDomainNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainNameResponse)
    Q_DISABLE_COPY(CreateDomainNameResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
