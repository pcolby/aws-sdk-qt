// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCEREQUEST_P_H
#define QTAWS_REBOOTDBINSTANCEREQUEST_P_H

#include "rdsrequest_p.h"
#include "rebootdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class RebootDBInstanceRequest;

class RebootDBInstanceRequestPrivate : public RdsRequestPrivate {

public:
    RebootDBInstanceRequestPrivate(const RdsRequest::Action action,
                                   RebootDBInstanceRequest * const q);
    RebootDBInstanceRequestPrivate(const RebootDBInstanceRequestPrivate &other,
                                   RebootDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
