// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERECSCLUSTERREQUEST_P_H
#define QTAWS_DEREGISTERECSCLUSTERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deregisterecsclusterrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterEcsClusterRequest;

class DeregisterEcsClusterRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeregisterEcsClusterRequestPrivate(const OpsWorksRequest::Action action,
                                   DeregisterEcsClusterRequest * const q);
    DeregisterEcsClusterRequestPrivate(const DeregisterEcsClusterRequestPrivate &other,
                                   DeregisterEcsClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterEcsClusterRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
