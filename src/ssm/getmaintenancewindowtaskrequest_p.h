// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWTASKREQUEST_P_H
#define QTAWS_GETMAINTENANCEWINDOWTASKREQUEST_P_H

#include "ssmrequest_p.h"
#include "getmaintenancewindowtaskrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowTaskRequest;

class GetMaintenanceWindowTaskRequestPrivate : public SsmRequestPrivate {

public:
    GetMaintenanceWindowTaskRequestPrivate(const SsmRequest::Action action,
                                   GetMaintenanceWindowTaskRequest * const q);
    GetMaintenanceWindowTaskRequestPrivate(const GetMaintenanceWindowTaskRequestPrivate &other,
                                   GetMaintenanceWindowTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowTaskRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
