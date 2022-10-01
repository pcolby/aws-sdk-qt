// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTGROUPRESPONSE_P_H
#define QTAWS_DELETEENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteEndpointGroupResponse;

class DeleteEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DeleteEndpointGroupResponsePrivate(DeleteEndpointGroupResponse * const q);

    void parseDeleteEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointGroupResponse)
    Q_DISABLE_COPY(DeleteEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
