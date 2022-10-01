// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTICASTGROUPRESPONSE_P_H
#define QTAWS_DELETEMULTICASTGROUPRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteMulticastGroupResponse;

class DeleteMulticastGroupResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteMulticastGroupResponsePrivate(DeleteMulticastGroupResponse * const q);

    void parseDeleteMulticastGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMulticastGroupResponse)
    Q_DISABLE_COPY(DeleteMulticastGroupResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
