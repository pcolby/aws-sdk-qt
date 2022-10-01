// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERJOBSREQUEST_P_H
#define QTAWS_LISTCLUSTERJOBSREQUEST_P_H

#include "snowballrequest_p.h"
#include "listclusterjobsrequest.h"

namespace QtAws {
namespace Snowball {

class ListClusterJobsRequest;

class ListClusterJobsRequestPrivate : public SnowballRequestPrivate {

public:
    ListClusterJobsRequestPrivate(const SnowballRequest::Action action,
                                   ListClusterJobsRequest * const q);
    ListClusterJobsRequestPrivate(const ListClusterJobsRequestPrivate &other,
                                   ListClusterJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClusterJobsRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
