// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTGROUPSRESPONSE_P_H
#define QTAWS_LISTENDPOINTGROUPSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListEndpointGroupsResponse;

class ListEndpointGroupsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListEndpointGroupsResponsePrivate(ListEndpointGroupsResponse * const q);

    void parseListEndpointGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEndpointGroupsResponse)
    Q_DISABLE_COPY(ListEndpointGroupsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
