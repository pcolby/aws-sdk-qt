// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIRESPONSE_H
#define QTAWS_DELETEAPIRESPONSE_H

#include "apigatewayv2response.h"
#include "deleteapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteApiResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteApiResponse(const DeleteApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiResponse)
    Q_DISABLE_COPY(DeleteApiResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
