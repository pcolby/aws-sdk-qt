// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDESTINATIONRESPONSE_P_H
#define QTAWS_GETDESTINATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetDestinationResponse;

class GetDestinationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetDestinationResponsePrivate(GetDestinationResponse * const q);

    void parseGetDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDestinationResponse)
    Q_DISABLE_COPY(GetDestinationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
