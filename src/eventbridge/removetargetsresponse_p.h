// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETARGETSRESPONSE_P_H
#define QTAWS_REMOVETARGETSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class RemoveTargetsResponse;

class RemoveTargetsResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit RemoveTargetsResponsePrivate(RemoveTargetsResponse * const q);

    void parseRemoveTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTargetsResponse)
    Q_DISABLE_COPY(RemoveTargetsResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
