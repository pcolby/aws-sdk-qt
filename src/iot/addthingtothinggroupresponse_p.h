// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOTHINGGROUPRESPONSE_P_H
#define QTAWS_ADDTHINGTOTHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AddThingToThingGroupResponse;

class AddThingToThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit AddThingToThingGroupResponsePrivate(AddThingToThingGroupResponse * const q);

    void parseAddThingToThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddThingToThingGroupResponse)
    Q_DISABLE_COPY(AddThingToThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
