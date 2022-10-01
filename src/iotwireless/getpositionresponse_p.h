// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONRESPONSE_P_H
#define QTAWS_GETPOSITIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionResponse;

class GetPositionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetPositionResponsePrivate(GetPositionResponse * const q);

    void parseGetPositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPositionResponse)
    Q_DISABLE_COPY(GetPositionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
