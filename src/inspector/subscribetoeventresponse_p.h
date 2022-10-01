// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOEVENTRESPONSE_P_H
#define QTAWS_SUBSCRIBETOEVENTRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class SubscribeToEventResponse;

class SubscribeToEventResponsePrivate : public InspectorResponsePrivate {

public:

    explicit SubscribeToEventResponsePrivate(SubscribeToEventResponse * const q);

    void parseSubscribeToEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubscribeToEventResponse)
    Q_DISABLE_COPY(SubscribeToEventResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
