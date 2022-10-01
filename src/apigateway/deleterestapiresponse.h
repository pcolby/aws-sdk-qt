// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESTAPIRESPONSE_H
#define QTAWS_DELETERESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "deleterestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRestApiResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteRestApiResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteRestApiResponse(const DeleteRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRestApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRestApiResponse)
    Q_DISABLE_COPY(DeleteRestApiResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
