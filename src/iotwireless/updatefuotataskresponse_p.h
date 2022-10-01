// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUOTATASKRESPONSE_P_H
#define QTAWS_UPDATEFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateFuotaTaskResponse;

class UpdateFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateFuotaTaskResponsePrivate(UpdateFuotaTaskResponse * const q);

    void parseUpdateFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFuotaTaskResponse)
    Q_DISABLE_COPY(UpdateFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
