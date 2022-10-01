// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTGROUPRESPONSE_P_H
#define QTAWS_CREATEENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateEndpointGroupResponse;

class CreateEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit CreateEndpointGroupResponsePrivate(CreateEndpointGroupResponse * const q);

    void parseCreateEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEndpointGroupResponse)
    Q_DISABLE_COPY(CreateEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
