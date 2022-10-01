// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMROUTINGENDPOINTSRESPONSE_P_H
#define QTAWS_ADDCUSTOMROUTINGENDPOINTSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class AddCustomRoutingEndpointsResponse;

class AddCustomRoutingEndpointsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit AddCustomRoutingEndpointsResponsePrivate(AddCustomRoutingEndpointsResponse * const q);

    void parseAddCustomRoutingEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddCustomRoutingEndpointsResponse)
    Q_DISABLE_COPY(AddCustomRoutingEndpointsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
