// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANKEYRESPONSE_H
#define QTAWS_DELETEUSAGEPLANKEYRESPONSE_H

#include "apigatewayresponse.h"
#include "deleteusageplankeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanKeyResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteUsagePlanKeyResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteUsagePlanKeyResponse(const DeleteUsagePlanKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUsagePlanKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsagePlanKeyResponse)
    Q_DISABLE_COPY(DeleteUsagePlanKeyResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
