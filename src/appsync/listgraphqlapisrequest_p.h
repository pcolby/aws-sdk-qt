// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRAPHQLAPISREQUEST_P_H
#define QTAWS_LISTGRAPHQLAPISREQUEST_P_H

#include "appsyncrequest_p.h"
#include "listgraphqlapisrequest.h"

namespace QtAws {
namespace AppSync {

class ListGraphqlApisRequest;

class ListGraphqlApisRequestPrivate : public AppSyncRequestPrivate {

public:
    ListGraphqlApisRequestPrivate(const AppSyncRequest::Action action,
                                   ListGraphqlApisRequest * const q);
    ListGraphqlApisRequestPrivate(const ListGraphqlApisRequestPrivate &other,
                                   ListGraphqlApisRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGraphqlApisRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
