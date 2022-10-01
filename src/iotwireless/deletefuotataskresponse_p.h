// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUOTATASKRESPONSE_P_H
#define QTAWS_DELETEFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteFuotaTaskResponse;

class DeleteFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteFuotaTaskResponsePrivate(DeleteFuotaTaskResponse * const q);

    void parseDeleteFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFuotaTaskResponse)
    Q_DISABLE_COPY(DeleteFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
