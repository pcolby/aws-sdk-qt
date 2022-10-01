// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_CREATEMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "createmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class CreateMaintenanceWindowRequest;

class CreateMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    CreateMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   CreateMaintenanceWindowRequest * const q);
    CreateMaintenanceWindowRequestPrivate(const CreateMaintenanceWindowRequestPrivate &other,
                                   CreateMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
