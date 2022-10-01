// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAFLOWENDPOINTGROUPRESPONSE_P_H
#define QTAWS_CREATEDATAFLOWENDPOINTGROUPRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class CreateDataflowEndpointGroupResponse;

class CreateDataflowEndpointGroupResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit CreateDataflowEndpointGroupResponsePrivate(CreateDataflowEndpointGroupResponse * const q);

    void parseCreateDataflowEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataflowEndpointGroupResponse)
    Q_DISABLE_COPY(CreateDataflowEndpointGroupResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
