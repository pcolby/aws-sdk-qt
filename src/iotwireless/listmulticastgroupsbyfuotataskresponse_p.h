// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSBYFUOTATASKRESPONSE_P_H
#define QTAWS_LISTMULTICASTGROUPSBYFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsByFuotaTaskResponse;

class ListMulticastGroupsByFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListMulticastGroupsByFuotaTaskResponsePrivate(ListMulticastGroupsByFuotaTaskResponse * const q);

    void parseListMulticastGroupsByFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMulticastGroupsByFuotaTaskResponse)
    Q_DISABLE_COPY(ListMulticastGroupsByFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
