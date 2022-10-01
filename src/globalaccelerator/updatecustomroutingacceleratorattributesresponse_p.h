// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorAttributesResponse;

class UpdateCustomRoutingAcceleratorAttributesResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateCustomRoutingAcceleratorAttributesResponsePrivate(UpdateCustomRoutingAcceleratorAttributesResponse * const q);

    void parseUpdateCustomRoutingAcceleratorAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingAcceleratorAttributesResponse)
    Q_DISABLE_COPY(UpdateCustomRoutingAcceleratorAttributesResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
