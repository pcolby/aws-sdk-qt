// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPRESPONSE_P_H
#define QTAWS_UPDATETHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupResponse;

class UpdateThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateThingGroupResponsePrivate(UpdateThingGroupResponse * const q);

    void parseUpdateThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThingGroupResponse)
    Q_DISABLE_COPY(UpdateThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
