// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALCLUSTERREQUEST_P_H
#define QTAWS_DELETEVIRTUALCLUSTERREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "deletevirtualclusterrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DeleteVirtualClusterRequest;

class DeleteVirtualClusterRequestPrivate : public EmrcontainersRequestPrivate {

public:
    DeleteVirtualClusterRequestPrivate(const EmrcontainersRequest::Action action,
                                   DeleteVirtualClusterRequest * const q);
    DeleteVirtualClusterRequestPrivate(const DeleteVirtualClusterRequestPrivate &other,
                                   DeleteVirtualClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualClusterRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
