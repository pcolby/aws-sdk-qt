// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGLISTENERSRESPONSE_P_H
#define QTAWS_LISTCUSTOMROUTINGLISTENERSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingListenersResponse;

class ListCustomRoutingListenersResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListCustomRoutingListenersResponsePrivate(ListCustomRoutingListenersResponse * const q);

    void parseListCustomRoutingListenersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingListenersResponse)
    Q_DISABLE_COPY(ListCustomRoutingListenersResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
