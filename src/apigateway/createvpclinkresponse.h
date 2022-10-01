// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCLINKRESPONSE_H
#define QTAWS_CREATEVPCLINKRESPONSE_H

#include "apigatewayresponse.h"
#include "createvpclinkrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateVpcLinkResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateVpcLinkResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateVpcLinkResponse(const CreateVpcLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcLinkResponse)
    Q_DISABLE_COPY(CreateVpcLinkResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
