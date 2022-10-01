// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUOTATASKRESPONSE_P_H
#define QTAWS_GETFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetFuotaTaskResponse;

class GetFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetFuotaTaskResponsePrivate(GetFuotaTaskResponse * const q);

    void parseGetFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFuotaTaskResponse)
    Q_DISABLE_COPY(GetFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
