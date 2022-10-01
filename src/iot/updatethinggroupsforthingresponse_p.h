// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPSFORTHINGRESPONSE_P_H
#define QTAWS_UPDATETHINGGROUPSFORTHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupsForThingResponse;

class UpdateThingGroupsForThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateThingGroupsForThingResponsePrivate(UpdateThingGroupsForThingResponse * const q);

    void parseUpdateThingGroupsForThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThingGroupsForThingResponse)
    Q_DISABLE_COPY(UpdateThingGroupsForThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
