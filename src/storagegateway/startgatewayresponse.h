// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGATEWAYRESPONSE_H
#define QTAWS_STARTGATEWAYRESPONSE_H

#include "storagegatewayresponse.h"
#include "startgatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class StartGatewayResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT StartGatewayResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    StartGatewayResponse(const StartGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartGatewayResponse)
    Q_DISABLE_COPY(StartGatewayResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
