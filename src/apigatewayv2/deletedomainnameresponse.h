// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMERESPONSE_H
#define QTAWS_DELETEDOMAINNAMERESPONSE_H

#include "apigatewayv2response.h"
#include "deletedomainnamerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteDomainNameResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteDomainNameResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteDomainNameResponse(const DeleteDomainNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainNameResponse)
    Q_DISABLE_COPY(DeleteDomainNameResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
