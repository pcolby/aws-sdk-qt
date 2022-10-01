// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGGROUPRESPONSE_P_H
#define QTAWS_DELETETHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteThingGroupResponse;

class DeleteThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteThingGroupResponsePrivate(DeleteThingGroupResponse * const q);

    void parseDeleteThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThingGroupResponse)
    Q_DISABLE_COPY(DeleteThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
