// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESPONSE_P_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsByDestinationResponse;

class ListCustomRoutingPortMappingsByDestinationResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListCustomRoutingPortMappingsByDestinationResponsePrivate(ListCustomRoutingPortMappingsByDestinationResponse * const q);

    void parseListCustomRoutingPortMappingsByDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingPortMappingsByDestinationResponse)
    Q_DISABLE_COPY(ListCustomRoutingPortMappingsByDestinationResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
