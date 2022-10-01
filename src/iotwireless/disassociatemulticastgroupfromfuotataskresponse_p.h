// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKRESPONSE_P_H
#define QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateMulticastGroupFromFuotaTaskResponse;

class DisassociateMulticastGroupFromFuotaTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateMulticastGroupFromFuotaTaskResponsePrivate(DisassociateMulticastGroupFromFuotaTaskResponse * const q);

    void parseDisassociateMulticastGroupFromFuotaTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMulticastGroupFromFuotaTaskResponse)
    Q_DISABLE_COPY(DisassociateMulticastGroupFromFuotaTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
