// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSREQUEST_P_H
#define QTAWS_LISTCLUSTERSREQUEST_P_H

#include "ecsrequest_p.h"
#include "listclustersrequest.h"

namespace QtAws {
namespace Ecs {

class ListClustersRequest;

class ListClustersRequestPrivate : public EcsRequestPrivate {

public:
    ListClustersRequestPrivate(const EcsRequest::Action action,
                                   ListClustersRequest * const q);
    ListClustersRequestPrivate(const ListClustersRequestPrivate &other,
                                   ListClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClustersRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
