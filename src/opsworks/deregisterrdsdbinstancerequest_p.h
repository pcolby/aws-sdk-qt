// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRDSDBINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERRDSDBINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deregisterrdsdbinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterRdsDbInstanceRequest;

class DeregisterRdsDbInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeregisterRdsDbInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   DeregisterRdsDbInstanceRequest * const q);
    DeregisterRdsDbInstanceRequestPrivate(const DeregisterRdsDbInstanceRequestPrivate &other,
                                   DeregisterRdsDbInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterRdsDbInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
