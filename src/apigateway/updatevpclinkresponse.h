// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCLINKRESPONSE_H
#define QTAWS_UPDATEVPCLINKRESPONSE_H

#include "apigatewayresponse.h"
#include "updatevpclinkrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateVpcLinkResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateVpcLinkResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateVpcLinkResponse(const UpdateVpcLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVpcLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVpcLinkResponse)
    Q_DISABLE_COPY(UpdateVpcLinkResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
