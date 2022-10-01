// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONRESPONSE_P_H
#define QTAWS_UPDATECONNECTIONRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class UpdateConnectionResponse;

class UpdateConnectionResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit UpdateConnectionResponsePrivate(UpdateConnectionResponse * const q);

    void parseUpdateConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectionResponse)
    Q_DISABLE_COPY(UpdateConnectionResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
