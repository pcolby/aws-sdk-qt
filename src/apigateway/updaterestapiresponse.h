// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESTAPIRESPONSE_H
#define QTAWS_UPDATERESTAPIRESPONSE_H

#include "apigatewayresponse.h"
#include "updaterestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRestApiResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateRestApiResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateRestApiResponse(const UpdateRestApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRestApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRestApiResponse)
    Q_DISABLE_COPY(UpdateRestApiResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
