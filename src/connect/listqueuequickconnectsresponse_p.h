// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEQUICKCONNECTSRESPONSE_P_H
#define QTAWS_LISTQUEUEQUICKCONNECTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListQueueQuickConnectsResponse;

class ListQueueQuickConnectsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListQueueQuickConnectsResponsePrivate(ListQueueQuickConnectsResponse * const q);

    void parseListQueueQuickConnectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueueQuickConnectsResponse)
    Q_DISABLE_COPY(ListQueueQuickConnectsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
