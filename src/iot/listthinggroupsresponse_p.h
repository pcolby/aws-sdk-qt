// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSRESPONSE_P_H
#define QTAWS_LISTTHINGGROUPSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsResponse;

class ListThingGroupsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingGroupsResponsePrivate(ListThingGroupsResponse * const q);

    void parseListThingGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingGroupsResponse)
    Q_DISABLE_COPY(ListThingGroupsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
