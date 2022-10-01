// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGEPLANRESPONSE_H
#define QTAWS_UPDATEUSAGEPLANRESPONSE_H

#include "apigatewayresponse.h"
#include "updateusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateUsagePlanResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateUsagePlanResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateUsagePlanResponse(const UpdateUsagePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUsagePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUsagePlanResponse)
    Q_DISABLE_COPY(UpdateUsagePlanResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
