// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAFLOWENDPOINTGROUPRESPONSE_P_H
#define QTAWS_DELETEDATAFLOWENDPOINTGROUPRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class DeleteDataflowEndpointGroupResponse;

class DeleteDataflowEndpointGroupResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit DeleteDataflowEndpointGroupResponsePrivate(DeleteDataflowEndpointGroupResponse * const q);

    void parseDeleteDataflowEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataflowEndpointGroupResponse)
    Q_DISABLE_COPY(DeleteDataflowEndpointGroupResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
