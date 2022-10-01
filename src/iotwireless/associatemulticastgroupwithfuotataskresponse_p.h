// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMULTICASTGROUPWITHFUOTATASKRESPONSE_P_H
#define QTAWS_ASSOCIATEMULTICASTGROUPWITHFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateMulticastGroupWithFuotaTaskResponse;

class AssociateMulticastGroupWithFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateMulticastGroupWithFuotaTaskResponsePrivate(AssociateMulticastGroupWithFuotaTaskResponse * const q);

    void parseAssociateMulticastGroupWithFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateMulticastGroupWithFuotaTaskResponse)
    Q_DISABLE_COPY(AssociateMulticastGroupWithFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
