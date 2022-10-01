// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDYNAMICTHINGGROUPRESPONSE_P_H
#define QTAWS_DELETEDYNAMICTHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteDynamicThingGroupResponse;

class DeleteDynamicThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteDynamicThingGroupResponsePrivate(DeleteDynamicThingGroupResponse * const q);

    void parseDeleteDynamicThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDynamicThingGroupResponse)
    Q_DISABLE_COPY(DeleteDynamicThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
