// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLAYSRESPONSE_P_H
#define QTAWS_LISTREPLAYSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListReplaysResponse;

class ListReplaysResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListReplaysResponsePrivate(ListReplaysResponse * const q);

    void parseListReplaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReplaysResponse)
    Q_DISABLE_COPY(ListReplaysResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
