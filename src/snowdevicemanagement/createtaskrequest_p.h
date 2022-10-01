// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKREQUEST_P_H
#define QTAWS_CREATETASKREQUEST_P_H

#include "snowdevicemanagementrequest_p.h"
#include "createtaskrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CreateTaskRequest;

class CreateTaskRequestPrivate : public SnowDeviceManagementRequestPrivate {

public:
    CreateTaskRequestPrivate(const SnowDeviceManagementRequest::Action action,
                                   CreateTaskRequest * const q);
    CreateTaskRequestPrivate(const CreateTaskRequestPrivate &other,
                                   CreateTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTaskRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
