// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANRESPONSE_H
#define QTAWS_CREATEUSAGEPLANRESPONSE_H

#include "apigatewayresponse.h"
#include "createusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateUsagePlanResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateUsagePlanResponse(const CreateUsagePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUsagePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsagePlanResponse)
    Q_DISABLE_COPY(CreateUsagePlanResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
