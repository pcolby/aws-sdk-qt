// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDESTINATIONRESPONSE_P_H
#define QTAWS_CREATEDESTINATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateDestinationResponse;

class CreateDestinationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateDestinationResponsePrivate(CreateDestinationResponse * const q);

    void parseCreateDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDestinationResponse)
    Q_DISABLE_COPY(CreateDestinationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
