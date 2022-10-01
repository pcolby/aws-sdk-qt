// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTGROUPRESPONSE_P_H
#define QTAWS_UPDATEENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateEndpointGroupResponse;

class UpdateEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateEndpointGroupResponsePrivate(UpdateEndpointGroupResponse * const q);

    void parseUpdateEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointGroupResponse)
    Q_DISABLE_COPY(UpdateEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
