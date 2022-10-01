// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHOSTEDCONNECTIONRESPONSE_H
#define QTAWS_ASSOCIATEHOSTEDCONNECTIONRESPONSE_H

#include "directconnectresponse.h"
#include "associatehostedconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateHostedConnectionResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateHostedConnectionResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AssociateHostedConnectionResponse(const AssociateHostedConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateHostedConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateHostedConnectionResponse)
    Q_DISABLE_COPY(AssociateHostedConnectionResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
