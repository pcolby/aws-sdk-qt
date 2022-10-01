// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "registertargetwithmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterTargetWithMaintenanceWindowRequest;

class RegisterTargetWithMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    RegisterTargetWithMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   RegisterTargetWithMaintenanceWindowRequest * const q);
    RegisterTargetWithMaintenanceWindowRequestPrivate(const RegisterTargetWithMaintenanceWindowRequestPrivate &other,
                                   RegisterTargetWithMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTargetWithMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
