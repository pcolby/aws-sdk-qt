// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMULTICASTGROUPWITHFUOTATASKREQUEST_P_H
#define QTAWS_ASSOCIATEMULTICASTGROUPWITHFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associatemulticastgroupwithfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateMulticastGroupWithFuotaTaskRequest;

class AssociateMulticastGroupWithFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateMulticastGroupWithFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateMulticastGroupWithFuotaTaskRequest * const q);
    AssociateMulticastGroupWithFuotaTaskRequestPrivate(const AssociateMulticastGroupWithFuotaTaskRequestPrivate &other,
                                   AssociateMulticastGroupWithFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateMulticastGroupWithFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
