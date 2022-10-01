// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDBPROXYTARGETSREQUEST_P_H
#define QTAWS_REGISTERDBPROXYTARGETSREQUEST_P_H

#include "rdsrequest_p.h"
#include "registerdbproxytargetsrequest.h"

namespace QtAws {
namespace Rds {

class RegisterDBProxyTargetsRequest;

class RegisterDBProxyTargetsRequestPrivate : public RdsRequestPrivate {

public:
    RegisterDBProxyTargetsRequestPrivate(const RdsRequest::Action action,
                                   RegisterDBProxyTargetsRequest * const q);
    RegisterDBProxyTargetsRequestPrivate(const RegisterDBProxyTargetsRequestPrivate &other,
                                   RegisterDBProxyTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDBProxyTargetsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
