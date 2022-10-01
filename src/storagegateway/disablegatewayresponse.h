// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEGATEWAYRESPONSE_H
#define QTAWS_DISABLEGATEWAYRESPONSE_H

#include "storagegatewayresponse.h"
#include "disablegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DisableGatewayResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DisableGatewayResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DisableGatewayResponse(const DisableGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableGatewayResponse)
    Q_DISABLE_COPY(DisableGatewayResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
