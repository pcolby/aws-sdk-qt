// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBINSTANCEREQUEST_P_H
#define QTAWS_ADDROLETODBINSTANCEREQUEST_P_H

#include "rdsrequest_p.h"
#include "addroletodbinstancerequest.h"

namespace QtAws {
namespace Rds {

class AddRoleToDBInstanceRequest;

class AddRoleToDBInstanceRequestPrivate : public RdsRequestPrivate {

public:
    AddRoleToDBInstanceRequestPrivate(const RdsRequest::Action action,
                                   AddRoleToDBInstanceRequest * const q);
    AddRoleToDBInstanceRequestPrivate(const AddRoleToDBInstanceRequestPrivate &other,
                                   AddRoleToDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddRoleToDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
