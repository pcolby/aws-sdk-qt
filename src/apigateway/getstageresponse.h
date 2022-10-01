// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGERESPONSE_H
#define QTAWS_GETSTAGERESPONSE_H

#include "apigatewayresponse.h"
#include "getstagerequest.h"

namespace QtAws {
namespace ApiGateway {

class GetStageResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetStageResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetStageResponse(const GetStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStageResponse)
    Q_DISABLE_COPY(GetStageResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
