// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORRESPONSE_P_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorResponse;

class UpdateCustomRoutingAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateCustomRoutingAcceleratorResponsePrivate(UpdateCustomRoutingAcceleratorResponse * const q);

    void parseUpdateCustomRoutingAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(UpdateCustomRoutingAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
