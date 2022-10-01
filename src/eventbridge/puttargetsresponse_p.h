// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTARGETSRESPONSE_P_H
#define QTAWS_PUTTARGETSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class PutTargetsResponse;

class PutTargetsResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit PutTargetsResponsePrivate(PutTargetsResponse * const q);

    void parsePutTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutTargetsResponse)
    Q_DISABLE_COPY(PutTargetsResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
