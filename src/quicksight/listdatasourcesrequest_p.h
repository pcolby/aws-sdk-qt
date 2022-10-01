// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESREQUEST_P_H
#define QTAWS_LISTDATASOURCESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listdatasourcesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDataSourcesRequest;

class ListDataSourcesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListDataSourcesRequestPrivate(const QuickSightRequest::Action action,
                                   ListDataSourcesRequest * const q);
    ListDataSourcesRequestPrivate(const ListDataSourcesRequestPrivate &other,
                                   ListDataSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSourcesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
