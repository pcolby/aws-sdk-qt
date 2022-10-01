// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETAINEDMESSAGESRESPONSE_P_H
#define QTAWS_LISTRETAINEDMESSAGESRESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class ListRetainedMessagesResponse;

class ListRetainedMessagesResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit ListRetainedMessagesResponsePrivate(ListRetainedMessagesResponse * const q);

    void parseListRetainedMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRetainedMessagesResponse)
    Q_DISABLE_COPY(ListRetainedMessagesResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
