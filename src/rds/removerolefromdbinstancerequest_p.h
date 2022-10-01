// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBINSTANCEREQUEST_P_H
#define QTAWS_REMOVEROLEFROMDBINSTANCEREQUEST_P_H

#include "rdsrequest_p.h"
#include "removerolefromdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBInstanceRequest;

class RemoveRoleFromDBInstanceRequestPrivate : public RdsRequestPrivate {

public:
    RemoveRoleFromDBInstanceRequestPrivate(const RdsRequest::Action action,
                                   RemoveRoleFromDBInstanceRequest * const q);
    RemoveRoleFromDBInstanceRequestPrivate(const RemoveRoleFromDBInstanceRequestPrivate &other,
                                   RemoveRoleFromDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
