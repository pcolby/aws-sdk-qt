// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deregisterinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterInstanceRequest;

class DeregisterInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeregisterInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   DeregisterInstanceRequest * const q);
    DeregisterInstanceRequestPrivate(const DeregisterInstanceRequestPrivate &other,
                                   DeregisterInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
