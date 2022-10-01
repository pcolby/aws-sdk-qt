// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUOTATASKREQUEST_P_H
#define QTAWS_GETFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetFuotaTaskRequest;

class GetFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetFuotaTaskRequest * const q);
    GetFuotaTaskRequestPrivate(const GetFuotaTaskRequestPrivate &other,
                                   GetFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
