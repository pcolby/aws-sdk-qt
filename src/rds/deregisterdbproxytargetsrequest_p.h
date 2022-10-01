// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDBPROXYTARGETSREQUEST_P_H
#define QTAWS_DEREGISTERDBPROXYTARGETSREQUEST_P_H

#include "rdsrequest_p.h"
#include "deregisterdbproxytargetsrequest.h"

namespace QtAws {
namespace Rds {

class DeregisterDBProxyTargetsRequest;

class DeregisterDBProxyTargetsRequestPrivate : public RdsRequestPrivate {

public:
    DeregisterDBProxyTargetsRequestPrivate(const RdsRequest::Action action,
                                   DeregisterDBProxyTargetsRequest * const q);
    DeregisterDBProxyTargetsRequestPrivate(const DeregisterDBProxyTargetsRequestPrivate &other,
                                   DeregisterDBProxyTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterDBProxyTargetsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
