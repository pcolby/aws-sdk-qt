// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMEVENTRESPONSE_P_H
#define QTAWS_UNSUBSCRIBEFROMEVENTRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class UnsubscribeFromEventResponse;

class UnsubscribeFromEventResponsePrivate : public InspectorResponsePrivate {

public:

    explicit UnsubscribeFromEventResponsePrivate(UnsubscribeFromEventResponse * const q);

    void parseUnsubscribeFromEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnsubscribeFromEventResponse)
    Q_DISABLE_COPY(UnsubscribeFromEventResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
