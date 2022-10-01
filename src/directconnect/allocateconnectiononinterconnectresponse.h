// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATECONNECTIONONINTERCONNECTRESPONSE_H
#define QTAWS_ALLOCATECONNECTIONONINTERCONNECTRESPONSE_H

#include "directconnectresponse.h"
#include "allocateconnectiononinterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateConnectionOnInterconnectResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocateConnectionOnInterconnectResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AllocateConnectionOnInterconnectResponse(const AllocateConnectionOnInterconnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateConnectionOnInterconnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateConnectionOnInterconnectResponse)
    Q_DISABLE_COPY(AllocateConnectionOnInterconnectResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
