// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKREQUEST_P_H
#define QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociatemulticastgroupfromfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateMulticastGroupFromFuotaTaskRequest;

class DisassociateMulticastGroupFromFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateMulticastGroupFromFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateMulticastGroupFromFuotaTaskRequest * const q);
    DisassociateMulticastGroupFromFuotaTaskRequestPrivate(const DisassociateMulticastGroupFromFuotaTaskRequestPrivate &other,
                                   DisassociateMulticastGroupFromFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMulticastGroupFromFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
