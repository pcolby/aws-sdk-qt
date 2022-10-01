// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGACCELERATORSRESPONSE_P_H
#define QTAWS_LISTCUSTOMROUTINGACCELERATORSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingAcceleratorsResponse;

class ListCustomRoutingAcceleratorsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListCustomRoutingAcceleratorsResponsePrivate(ListCustomRoutingAcceleratorsResponse * const q);

    void parseListCustomRoutingAcceleratorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingAcceleratorsResponse)
    Q_DISABLE_COPY(ListCustomRoutingAcceleratorsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
