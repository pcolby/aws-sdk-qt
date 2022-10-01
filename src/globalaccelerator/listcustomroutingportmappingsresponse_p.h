// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSRESPONSE_P_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsResponse;

class ListCustomRoutingPortMappingsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListCustomRoutingPortMappingsResponsePrivate(ListCustomRoutingPortMappingsResponse * const q);

    void parseListCustomRoutingPortMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingPortMappingsResponse)
    Q_DISABLE_COPY(ListCustomRoutingPortMappingsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
