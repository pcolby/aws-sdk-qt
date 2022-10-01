// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDESTINATIONSRESPONSE_P_H
#define QTAWS_LISTDESTINATIONSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListDestinationsResponse;

class ListDestinationsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListDestinationsResponsePrivate(ListDestinationsResponse * const q);

    void parseListDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDestinationsResponse)
    Q_DISABLE_COPY(ListDestinationsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
