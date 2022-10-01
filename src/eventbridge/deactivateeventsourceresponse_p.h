// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEEVENTSOURCERESPONSE_P_H
#define QTAWS_DEACTIVATEEVENTSOURCERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DeactivateEventSourceResponse;

class DeactivateEventSourceResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DeactivateEventSourceResponsePrivate(DeactivateEventSourceResponse * const q);

    void parseDeactivateEventSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateEventSourceResponse)
    Q_DISABLE_COPY(DeactivateEventSourceResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
