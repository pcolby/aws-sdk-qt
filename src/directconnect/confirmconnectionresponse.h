// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCONNECTIONRESPONSE_H
#define QTAWS_CONFIRMCONNECTIONRESPONSE_H

#include "directconnectresponse.h"
#include "confirmconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmConnectionResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmConnectionResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    ConfirmConnectionResponse(const ConfirmConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmConnectionResponse)
    Q_DISABLE_COPY(ConfirmConnectionResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
