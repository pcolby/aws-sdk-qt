// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCLUSTERREQUEST_P_H
#define QTAWS_DEREGISTERCLUSTERREQUEST_P_H

#include "eksrequest_p.h"
#include "deregisterclusterrequest.h"

namespace QtAws {
namespace Eks {

class DeregisterClusterRequest;

class DeregisterClusterRequestPrivate : public EksRequestPrivate {

public:
    DeregisterClusterRequestPrivate(const EksRequest::Action action,
                                   DeregisterClusterRequest * const q);
    DeregisterClusterRequestPrivate(const DeregisterClusterRequestPrivate &other,
                                   DeregisterClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterClusterRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
