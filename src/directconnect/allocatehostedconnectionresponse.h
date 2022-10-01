// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTEDCONNECTIONRESPONSE_H
#define QTAWS_ALLOCATEHOSTEDCONNECTIONRESPONSE_H

#include "directconnectresponse.h"
#include "allocatehostedconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateHostedConnectionResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocateHostedConnectionResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AllocateHostedConnectionResponse(const AllocateHostedConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateHostedConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateHostedConnectionResponse)
    Q_DISABLE_COPY(AllocateHostedConnectionResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
