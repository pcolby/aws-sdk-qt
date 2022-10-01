// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESREQUEST_P_H
#define QTAWS_LISTDATASOURCESREQUEST_P_H

#include "appsyncrequest_p.h"
#include "listdatasourcesrequest.h"

namespace QtAws {
namespace AppSync {

class ListDataSourcesRequest;

class ListDataSourcesRequestPrivate : public AppSyncRequestPrivate {

public:
    ListDataSourcesRequestPrivate(const AppSyncRequest::Action action,
                                   ListDataSourcesRequest * const q);
    ListDataSourcesRequestPrivate(const ListDataSourcesRequestPrivate &other,
                                   ListDataSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSourcesRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
