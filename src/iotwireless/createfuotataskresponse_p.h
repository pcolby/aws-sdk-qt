// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUOTATASKRESPONSE_P_H
#define QTAWS_CREATEFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateFuotaTaskResponse;

class CreateFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateFuotaTaskResponsePrivate(CreateFuotaTaskResponse * const q);

    void parseCreateFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFuotaTaskResponse)
    Q_DISABLE_COPY(CreateFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
