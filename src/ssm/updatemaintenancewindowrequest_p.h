// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_UPDATEMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "updatemaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowRequest;

class UpdateMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    UpdateMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   UpdateMaintenanceWindowRequest * const q);
    UpdateMaintenanceWindowRequestPrivate(const UpdateMaintenanceWindowRequestPrivate &other,
                                   UpdateMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
