// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_P_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "applypendingmaintenanceactionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ApplyPendingMaintenanceActionRequest;

class ApplyPendingMaintenanceActionRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ApplyPendingMaintenanceActionRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ApplyPendingMaintenanceActionRequest * const q);
    ApplyPendingMaintenanceActionRequestPrivate(const ApplyPendingMaintenanceActionRequestPrivate &other,
                                   ApplyPendingMaintenanceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplyPendingMaintenanceActionRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
