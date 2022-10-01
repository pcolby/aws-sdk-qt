// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUOTATASKREQUEST_P_H
#define QTAWS_CREATEFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateFuotaTaskRequest;

class CreateFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateFuotaTaskRequest * const q);
    CreateFuotaTaskRequestPrivate(const CreateFuotaTaskRequestPrivate &other,
                                   CreateFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
