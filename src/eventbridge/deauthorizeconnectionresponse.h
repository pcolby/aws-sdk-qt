// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONRESPONSE_H
#define QTAWS_DEAUTHORIZECONNECTIONRESPONSE_H

#include "eventbridgeresponse.h"
#include "deauthorizeconnectionrequest.h"

namespace QtAws {
namespace EventBridge {

class DeauthorizeConnectionResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DeauthorizeConnectionResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DeauthorizeConnectionResponse(const DeauthorizeConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeauthorizeConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeauthorizeConnectionResponse)
    Q_DISABLE_COPY(DeauthorizeConnectionResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
