// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCEREQUEST_P_H
#define QTAWS_STARTDBINSTANCEREQUEST_P_H

#include "rdsrequest_p.h"
#include "startdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceRequest;

class StartDBInstanceRequestPrivate : public RdsRequestPrivate {

public:
    StartDBInstanceRequestPrivate(const RdsRequest::Action action,
                                   StartDBInstanceRequest * const q);
    StartDBInstanceRequestPrivate(const StartDBInstanceRequestPrivate &other,
                                   StartDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
