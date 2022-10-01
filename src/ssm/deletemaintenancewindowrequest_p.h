// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_DELETEMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "deletemaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteMaintenanceWindowRequest;

class DeleteMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    DeleteMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   DeleteMaintenanceWindowRequest * const q);
    DeleteMaintenanceWindowRequestPrivate(const DeleteMaintenanceWindowRequestPrivate &other,
                                   DeleteMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
