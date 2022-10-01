// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECUSTOMROUTINGENDPOINTSRESPONSE_P_H
#define QTAWS_REMOVECUSTOMROUTINGENDPOINTSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class RemoveCustomRoutingEndpointsResponse;

class RemoveCustomRoutingEndpointsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit RemoveCustomRoutingEndpointsResponsePrivate(RemoveCustomRoutingEndpointsResponse * const q);

    void parseRemoveCustomRoutingEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveCustomRoutingEndpointsResponse)
    Q_DISABLE_COPY(RemoveCustomRoutingEndpointsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
