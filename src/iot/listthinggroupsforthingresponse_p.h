// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSFORTHINGRESPONSE_P_H
#define QTAWS_LISTTHINGGROUPSFORTHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsForThingResponse;

class ListThingGroupsForThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingGroupsForThingResponsePrivate(ListThingGroupsForThingResponse * const q);

    void parseListThingGroupsForThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingGroupsForThingResponse)
    Q_DISABLE_COPY(ListThingGroupsForThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
