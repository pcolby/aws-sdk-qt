// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUOTATASKREQUEST_P_H
#define QTAWS_UPDATEFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatefuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateFuotaTaskRequest;

class UpdateFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateFuotaTaskRequest * const q);
    UpdateFuotaTaskRequestPrivate(const UpdateFuotaTaskRequestPrivate &other,
                                   UpdateFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
