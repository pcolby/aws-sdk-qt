// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_P_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_P_H

#include "rdsrequest_p.h"
#include "restoredbclustertopointintimerequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterToPointInTimeRequest;

class RestoreDBClusterToPointInTimeRequestPrivate : public RdsRequestPrivate {

public:
    RestoreDBClusterToPointInTimeRequestPrivate(const RdsRequest::Action action,
                                   RestoreDBClusterToPointInTimeRequest * const q);
    RestoreDBClusterToPointInTimeRequestPrivate(const RestoreDBClusterToPointInTimeRequestPrivate &other,
                                   RestoreDBClusterToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterToPointInTimeRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
