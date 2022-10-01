// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCEREQUEST_P_H
#define QTAWS_STOPDBINSTANCEREQUEST_P_H

#include "rdsrequest_p.h"
#include "stopdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceRequest;

class StopDBInstanceRequestPrivate : public RdsRequestPrivate {

public:
    StopDBInstanceRequestPrivate(const RdsRequest::Action action,
                                   StopDBInstanceRequest * const q);
    StopDBInstanceRequestPrivate(const StopDBInstanceRequestPrivate &other,
                                   StopDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
