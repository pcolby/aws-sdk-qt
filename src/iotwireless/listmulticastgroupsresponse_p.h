// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSRESPONSE_P_H
#define QTAWS_LISTMULTICASTGROUPSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsResponse;

class ListMulticastGroupsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListMulticastGroupsResponsePrivate(ListMulticastGroupsResponse * const q);

    void parseListMulticastGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMulticastGroupsResponse)
    Q_DISABLE_COPY(ListMulticastGroupsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
