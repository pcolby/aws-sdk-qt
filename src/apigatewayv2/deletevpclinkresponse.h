// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKRESPONSE_H
#define QTAWS_DELETEVPCLINKRESPONSE_H

#include "apigatewayv2response.h"
#include "deletevpclinkrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteVpcLinkResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteVpcLinkResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteVpcLinkResponse(const DeleteVpcLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcLinkResponse)
    Q_DISABLE_COPY(DeleteVpcLinkResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
