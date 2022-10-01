// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSREQUEST_P_H
#define QTAWS_LISTCLUSTERSREQUEST_P_H

#include "snowballrequest_p.h"
#include "listclustersrequest.h"

namespace QtAws {
namespace Snowball {

class ListClustersRequest;

class ListClustersRequestPrivate : public SnowballRequestPrivate {

public:
    ListClustersRequestPrivate(const SnowballRequest::Action action,
                                   ListClustersRequest * const q);
    ListClustersRequestPrivate(const ListClustersRequestPrivate &other,
                                   ListClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClustersRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
