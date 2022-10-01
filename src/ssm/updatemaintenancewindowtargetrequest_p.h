// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTARGETREQUEST_P_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTARGETREQUEST_P_H

#include "ssmrequest_p.h"
#include "updatemaintenancewindowtargetrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTargetRequest;

class UpdateMaintenanceWindowTargetRequestPrivate : public SsmRequestPrivate {

public:
    UpdateMaintenanceWindowTargetRequestPrivate(const SsmRequest::Action action,
                                   UpdateMaintenanceWindowTargetRequest * const q);
    UpdateMaintenanceWindowTargetRequestPrivate(const UpdateMaintenanceWindowTargetRequestPrivate &other,
                                   UpdateMaintenanceWindowTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceWindowTargetRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
