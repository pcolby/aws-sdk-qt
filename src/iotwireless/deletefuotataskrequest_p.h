// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUOTATASKREQUEST_P_H
#define QTAWS_DELETEFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletefuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteFuotaTaskRequest;

class DeleteFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteFuotaTaskRequest * const q);
    DeleteFuotaTaskRequestPrivate(const DeleteFuotaTaskRequestPrivate &other,
                                   DeleteFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
