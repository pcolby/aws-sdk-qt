// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLAYRESPONSE_P_H
#define QTAWS_CANCELREPLAYRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class CancelReplayResponse;

class CancelReplayResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit CancelReplayResponsePrivate(CancelReplayResponse * const q);

    void parseCancelReplayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelReplayResponse)
    Q_DISABLE_COPY(CancelReplayResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
