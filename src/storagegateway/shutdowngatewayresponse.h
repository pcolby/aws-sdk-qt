// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHUTDOWNGATEWAYRESPONSE_H
#define QTAWS_SHUTDOWNGATEWAYRESPONSE_H

#include "storagegatewayresponse.h"
#include "shutdowngatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ShutdownGatewayResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ShutdownGatewayResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ShutdownGatewayResponse(const ShutdownGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ShutdownGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ShutdownGatewayResponse)
    Q_DISABLE_COPY(ShutdownGatewayResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
