// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKREQUEST_P_H
#define QTAWS_CANCELTASKREQUEST_P_H

#include "snowdevicemanagementrequest_p.h"
#include "canceltaskrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CancelTaskRequest;

class CancelTaskRequestPrivate : public SnowDeviceManagementRequestPrivate {

public:
    CancelTaskRequestPrivate(const SnowDeviceManagementRequest::Action action,
                                   CancelTaskRequest * const q);
    CancelTaskRequestPrivate(const CancelTaskRequestPrivate &other,
                                   CancelTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelTaskRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
