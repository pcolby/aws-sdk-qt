// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAFLOWENDPOINTGROUPSRESPONSE_P_H
#define QTAWS_LISTDATAFLOWENDPOINTGROUPSRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ListDataflowEndpointGroupsResponse;

class ListDataflowEndpointGroupsResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ListDataflowEndpointGroupsResponsePrivate(ListDataflowEndpointGroupsResponse * const q);

    void parseListDataflowEndpointGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataflowEndpointGroupsResponse)
    Q_DISABLE_COPY(ListDataflowEndpointGroupsResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
