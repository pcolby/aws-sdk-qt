// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_P_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_P_H

#include "docdbrequest_p.h"
#include "applypendingmaintenanceactionrequest.h"

namespace QtAws {
namespace DocDb {

class ApplyPendingMaintenanceActionRequest;

class ApplyPendingMaintenanceActionRequestPrivate : public DocDbRequestPrivate {

public:
    ApplyPendingMaintenanceActionRequestPrivate(const DocDbRequest::Action action,
                                   ApplyPendingMaintenanceActionRequest * const q);
    ApplyPendingMaintenanceActionRequestPrivate(const ApplyPendingMaintenanceActionRequestPrivate &other,
                                   ApplyPendingMaintenanceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplyPendingMaintenanceActionRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
