// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGGROUPRESPONSE_P_H
#define QTAWS_CREATETHINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateThingGroupResponse;

class CreateThingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateThingGroupResponsePrivate(CreateThingGroupResponse * const q);

    void parseCreateThingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThingGroupResponse)
    Q_DISABLE_COPY(CreateThingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
