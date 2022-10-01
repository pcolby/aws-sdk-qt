// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDYNAMICTHINGGROUPRESPONSE_P_H
#define QTAWS_CREATEDYNAMICTHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateDynamicThingGroupResponse;

class CreateDynamicThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateDynamicThingGroupResponsePrivate(CreateDynamicThingGroupResponse * const q);

    void parseCreateDynamicThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDynamicThingGroupResponse)
    Q_DISABLE_COPY(CreateDynamicThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
