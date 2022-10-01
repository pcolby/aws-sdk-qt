// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALCLUSTERREQUEST_P_H
#define QTAWS_CREATEVIRTUALCLUSTERREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "createvirtualclusterrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CreateVirtualClusterRequest;

class CreateVirtualClusterRequestPrivate : public EmrcontainersRequestPrivate {

public:
    CreateVirtualClusterRequestPrivate(const EmrcontainersRequest::Action action,
                                   CreateVirtualClusterRequest * const q);
    CreateVirtualClusterRequestPrivate(const CreateVirtualClusterRequestPrivate &other,
                                   CreateVirtualClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVirtualClusterRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
