// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAINTENANCEREQUEST_P_H
#define QTAWS_STARTMAINTENANCEREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "startmaintenancerequest.h"

namespace QtAws {
namespace OpsWorksCm {

class StartMaintenanceRequest;

class StartMaintenanceRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    StartMaintenanceRequestPrivate(const OpsWorksCmRequest::Action action,
                                   StartMaintenanceRequest * const q);
    StartMaintenanceRequestPrivate(const StartMaintenanceRequestPrivate &other,
                                   StartMaintenanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMaintenanceRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
