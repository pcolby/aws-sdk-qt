// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMANAGEDINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERMANAGEDINSTANCEREQUEST_P_H

#include "ssmrequest_p.h"
#include "deregistermanagedinstancerequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterManagedInstanceRequest;

class DeregisterManagedInstanceRequestPrivate : public SsmRequestPrivate {

public:
    DeregisterManagedInstanceRequestPrivate(const SsmRequest::Action action,
                                   DeregisterManagedInstanceRequest * const q);
    DeregisterManagedInstanceRequestPrivate(const DeregisterManagedInstanceRequestPrivate &other,
                                   DeregisterManagedInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterManagedInstanceRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
