// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEEVENTSOURCERESPONSE_P_H
#define QTAWS_ACTIVATEEVENTSOURCERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ActivateEventSourceResponse;

class ActivateEventSourceResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ActivateEventSourceResponsePrivate(ActivateEventSourceResponse * const q);

    void parseActivateEventSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateEventSourceResponse)
    Q_DISABLE_COPY(ActivateEventSourceResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
