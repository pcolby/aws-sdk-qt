// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_P_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_P_H

#include "neptunerequest_p.h"
#include "applypendingmaintenanceactionrequest.h"

namespace QtAws {
namespace Neptune {

class ApplyPendingMaintenanceActionRequest;

class ApplyPendingMaintenanceActionRequestPrivate : public NeptuneRequestPrivate {

public:
    ApplyPendingMaintenanceActionRequestPrivate(const NeptuneRequest::Action action,
                                   ApplyPendingMaintenanceActionRequest * const q);
    ApplyPendingMaintenanceActionRequestPrivate(const ApplyPendingMaintenanceActionRequestPrivate &other,
                                   ApplyPendingMaintenanceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplyPendingMaintenanceActionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
