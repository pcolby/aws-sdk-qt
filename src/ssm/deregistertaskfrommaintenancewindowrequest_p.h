// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "deregistertaskfrommaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterTaskFromMaintenanceWindowRequest;

class DeregisterTaskFromMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    DeregisterTaskFromMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   DeregisterTaskFromMaintenanceWindowRequest * const q);
    DeregisterTaskFromMaintenanceWindowRequestPrivate(const DeregisterTaskFromMaintenanceWindowRequestPrivate &other,
                                   DeregisterTaskFromMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTaskFromMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
