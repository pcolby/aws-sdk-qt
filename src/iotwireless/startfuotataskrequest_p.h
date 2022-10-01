// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFUOTATASKREQUEST_P_H
#define QTAWS_STARTFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "startfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartFuotaTaskRequest;

class StartFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    StartFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   StartFuotaTaskRequest * const q);
    StartFuotaTaskRequestPrivate(const StartFuotaTaskRequestPrivate &other,
                                   StartFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
