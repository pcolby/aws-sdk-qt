// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTASKREQUEST_P_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTASKREQUEST_P_H

#include "ssmrequest_p.h"
#include "updatemaintenancewindowtaskrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTaskRequest;

class UpdateMaintenanceWindowTaskRequestPrivate : public SsmRequestPrivate {

public:
    UpdateMaintenanceWindowTaskRequestPrivate(const SsmRequest::Action action,
                                   UpdateMaintenanceWindowTaskRequest * const q);
    UpdateMaintenanceWindowTaskRequestPrivate(const UpdateMaintenanceWindowTaskRequestPrivate &other,
                                   UpdateMaintenanceWindowTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceWindowTaskRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
