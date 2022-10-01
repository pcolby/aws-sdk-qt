// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOSITIONRESPONSE_P_H
#define QTAWS_UPDATEPOSITIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePositionResponse;

class UpdatePositionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdatePositionResponsePrivate(UpdatePositionResponse * const q);

    void parseUpdatePositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePositionResponse)
    Q_DISABLE_COPY(UpdatePositionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
