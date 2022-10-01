// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONRESPONSE_P_H
#define QTAWS_DEAUTHORIZECONNECTIONRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DeauthorizeConnectionResponse;

class DeauthorizeConnectionResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DeauthorizeConnectionResponsePrivate(DeauthorizeConnectionResponse * const q);

    void parseDeauthorizeConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeauthorizeConnectionResponse)
    Q_DISABLE_COPY(DeauthorizeConnectionResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
