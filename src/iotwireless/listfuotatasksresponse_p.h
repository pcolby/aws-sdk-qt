// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUOTATASKSRESPONSE_P_H
#define QTAWS_LISTFUOTATASKSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListFuotaTasksResponse;

class ListFuotaTasksResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListFuotaTasksResponsePrivate(ListFuotaTasksResponse * const q);

    void parseListFuotaTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFuotaTasksResponse)
    Q_DISABLE_COPY(ListFuotaTasksResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
