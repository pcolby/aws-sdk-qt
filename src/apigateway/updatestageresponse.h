// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGERESPONSE_H
#define QTAWS_UPDATESTAGERESPONSE_H

#include "apigatewayresponse.h"
#include "updatestagerequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateStageResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateStageResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateStageResponse(const UpdateStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStageResponse)
    Q_DISABLE_COPY(UpdateStageResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
