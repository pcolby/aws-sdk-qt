// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDESTINATIONRESPONSE_P_H
#define QTAWS_DELETEDESTINATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDestinationResponse;

class DeleteDestinationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteDestinationResponsePrivate(DeleteDestinationResponse * const q);

    void parseDeleteDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDestinationResponse)
    Q_DISABLE_COPY(DeleteDestinationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
