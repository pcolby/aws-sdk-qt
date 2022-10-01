// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYREQUEST_P_H
#define QTAWS_CREATEDBPROXYREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbproxyrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyRequest;

class CreateDBProxyRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBProxyRequestPrivate(const RdsRequest::Action action,
                                   CreateDBProxyRequest * const q);
    CreateDBProxyRequestPrivate(const CreateDBProxyRequestPrivate &other,
                                   CreateDBProxyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBProxyRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
