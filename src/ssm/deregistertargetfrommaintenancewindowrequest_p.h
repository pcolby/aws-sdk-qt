// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETFROMMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_DEREGISTERTARGETFROMMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "deregistertargetfrommaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterTargetFromMaintenanceWindowRequest;

class DeregisterTargetFromMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    DeregisterTargetFromMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   DeregisterTargetFromMaintenanceWindowRequest * const q);
    DeregisterTargetFromMaintenanceWindowRequestPrivate(const DeregisterTargetFromMaintenanceWindowRequestPrivate &other,
                                   DeregisterTargetFromMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTargetFromMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
