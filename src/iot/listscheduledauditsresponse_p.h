// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDAUDITSRESPONSE_P_H
#define QTAWS_LISTSCHEDULEDAUDITSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListScheduledAuditsResponse;

class ListScheduledAuditsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListScheduledAuditsResponsePrivate(ListScheduledAuditsResponse * const q);

    void parseListScheduledAuditsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListScheduledAuditsResponse)
    Q_DISABLE_COPY(ListScheduledAuditsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
