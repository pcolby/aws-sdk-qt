// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DENYCUSTOMROUTINGTRAFFICRESPONSE_P_H
#define QTAWS_DENYCUSTOMROUTINGTRAFFICRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DenyCustomRoutingTrafficResponse;

class DenyCustomRoutingTrafficResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DenyCustomRoutingTrafficResponsePrivate(DenyCustomRoutingTrafficResponse * const q);

    void parseDenyCustomRoutingTrafficResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DenyCustomRoutingTrafficResponse)
    Q_DISABLE_COPY(DenyCustomRoutingTrafficResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
