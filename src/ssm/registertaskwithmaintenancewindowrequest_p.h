// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "registertaskwithmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterTaskWithMaintenanceWindowRequest;

class RegisterTaskWithMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    RegisterTaskWithMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   RegisterTaskWithMaintenanceWindowRequest * const q);
    RegisterTaskWithMaintenanceWindowRequestPrivate(const RegisterTaskWithMaintenanceWindowRequestPrivate &other,
                                   RegisterTaskWithMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTaskWithMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
