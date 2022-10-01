// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANRESPONSE_H
#define QTAWS_DELETEUSAGEPLANRESPONSE_H

#include "apigatewayresponse.h"
#include "deleteusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteUsagePlanResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteUsagePlanResponse(const DeleteUsagePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUsagePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsagePlanResponse)
    Q_DISABLE_COPY(DeleteUsagePlanResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
