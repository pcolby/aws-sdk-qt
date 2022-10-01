// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWENDPOINTGROUPRESPONSE_P_H
#define QTAWS_GETDATAFLOWENDPOINTGROUPRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class GetDataflowEndpointGroupResponse;

class GetDataflowEndpointGroupResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit GetDataflowEndpointGroupResponsePrivate(GetDataflowEndpointGroupResponse * const q);

    void parseGetDataflowEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataflowEndpointGroupResponse)
    Q_DISABLE_COPY(GetDataflowEndpointGroupResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
