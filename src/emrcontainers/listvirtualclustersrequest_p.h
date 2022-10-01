// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALCLUSTERSREQUEST_P_H
#define QTAWS_LISTVIRTUALCLUSTERSREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "listvirtualclustersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListVirtualClustersRequest;

class ListVirtualClustersRequestPrivate : public EmrcontainersRequestPrivate {

public:
    ListVirtualClustersRequestPrivate(const EmrcontainersRequest::Action action,
                                   ListVirtualClustersRequest * const q);
    ListVirtualClustersRequestPrivate(const ListVirtualClustersRequestPrivate &other,
                                   ListVirtualClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualClustersRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
