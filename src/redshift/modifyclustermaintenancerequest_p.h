// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERMAINTENANCEREQUEST_P_H
#define QTAWS_MODIFYCLUSTERMAINTENANCEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclustermaintenancerequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterMaintenanceRequest;

class ModifyClusterMaintenanceRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterMaintenanceRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterMaintenanceRequest * const q);
    ModifyClusterMaintenanceRequestPrivate(const ModifyClusterMaintenanceRequestPrivate &other,
                                   ModifyClusterMaintenanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterMaintenanceRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
