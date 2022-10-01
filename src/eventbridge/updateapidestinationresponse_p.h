// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATEAPIDESTINATIONRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class UpdateApiDestinationResponse;

class UpdateApiDestinationResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit UpdateApiDestinationResponsePrivate(UpdateApiDestinationResponse * const q);

    void parseUpdateApiDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiDestinationResponse)
    Q_DISABLE_COPY(UpdateApiDestinationResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
