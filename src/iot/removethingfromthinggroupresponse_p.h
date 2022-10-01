// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMTHINGGROUPRESPONSE_P_H
#define QTAWS_REMOVETHINGFROMTHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromThingGroupResponse;

class RemoveThingFromThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit RemoveThingFromThingGroupResponsePrivate(RemoveThingFromThingGroupResponse * const q);

    void parseRemoveThingFromThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveThingFromThingGroupResponse)
    Q_DISABLE_COPY(RemoveThingFromThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
