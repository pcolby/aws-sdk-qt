// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHORIZERRESPONSE_H
#define QTAWS_DELETEAUTHORIZERRESPONSE_H

#include "apigatewayv2response.h"
#include "deleteauthorizerrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAuthorizerResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteAuthorizerResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteAuthorizerResponse(const DeleteAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuthorizerResponse)
    Q_DISABLE_COPY(DeleteAuthorizerResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
