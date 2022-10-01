// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_GETMAINTENANCEWINDOWREQUEST_P_H

#include "ssmrequest_p.h"
#include "getmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowRequest;

class GetMaintenanceWindowRequestPrivate : public SsmRequestPrivate {

public:
    GetMaintenanceWindowRequestPrivate(const SsmRequest::Action action,
                                   GetMaintenanceWindowRequest * const q);
    GetMaintenanceWindowRequestPrivate(const GetMaintenanceWindowRequestPrivate &other,
                                   GetMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
