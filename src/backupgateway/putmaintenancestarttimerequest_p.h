// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAINTENANCESTARTTIMEREQUEST_P_H
#define QTAWS_PUTMAINTENANCESTARTTIMEREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "putmaintenancestarttimerequest.h"

namespace QtAws {
namespace BackupGateway {

class PutMaintenanceStartTimeRequest;

class PutMaintenanceStartTimeRequestPrivate : public BackupGatewayRequestPrivate {

public:
    PutMaintenanceStartTimeRequestPrivate(const BackupGatewayRequest::Action action,
                                   PutMaintenanceStartTimeRequest * const q);
    PutMaintenanceStartTimeRequestPrivate(const PutMaintenanceStartTimeRequestPrivate &other,
                                   PutMaintenanceStartTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMaintenanceStartTimeRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
