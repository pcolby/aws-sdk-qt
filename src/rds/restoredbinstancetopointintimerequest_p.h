// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCETOPOINTINTIMEREQUEST_P_H
#define QTAWS_RESTOREDBINSTANCETOPOINTINTIMEREQUEST_P_H

#include "rdsrequest_p.h"
#include "restoredbinstancetopointintimerequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceToPointInTimeRequest;

class RestoreDBInstanceToPointInTimeRequestPrivate : public RdsRequestPrivate {

public:
    RestoreDBInstanceToPointInTimeRequestPrivate(const RdsRequest::Action action,
                                   RestoreDBInstanceToPointInTimeRequest * const q);
    RestoreDBInstanceToPointInTimeRequestPrivate(const RestoreDBInstanceToPointInTimeRequestPrivate &other,
                                   RestoreDBInstanceToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceToPointInTimeRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
