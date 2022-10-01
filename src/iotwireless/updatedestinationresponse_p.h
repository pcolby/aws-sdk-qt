// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATEDESTINATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateDestinationResponse;

class UpdateDestinationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateDestinationResponsePrivate(UpdateDestinationResponse * const q);

    void parseUpdateDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDestinationResponse)
    Q_DISABLE_COPY(UpdateDestinationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
