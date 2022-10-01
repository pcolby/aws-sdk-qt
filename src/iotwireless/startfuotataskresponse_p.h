// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFUOTATASKRESPONSE_P_H
#define QTAWS_STARTFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class StartFuotaTaskResponse;

class StartFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit StartFuotaTaskResponsePrivate(StartFuotaTaskResponse * const q);

    void parseStartFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFuotaTaskResponse)
    Q_DISABLE_COPY(StartFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
