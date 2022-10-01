// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOWCUSTOMROUTINGTRAFFICRESPONSE_P_H
#define QTAWS_ALLOWCUSTOMROUTINGTRAFFICRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class AllowCustomRoutingTrafficResponse;

class AllowCustomRoutingTrafficResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit AllowCustomRoutingTrafficResponsePrivate(AllowCustomRoutingTrafficResponse * const q);

    void parseAllowCustomRoutingTrafficResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllowCustomRoutingTrafficResponse)
    Q_DISABLE_COPY(AllowCustomRoutingTrafficResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
