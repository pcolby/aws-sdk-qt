// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSLISTSREQUEST_P_H
#define QTAWS_LISTAPPSLISTSREQUEST_P_H

#include "fmsrequest_p.h"
#include "listappslistsrequest.h"

namespace QtAws {
namespace Fms {

class ListAppsListsRequest;

class ListAppsListsRequestPrivate : public FmsRequestPrivate {

public:
    ListAppsListsRequestPrivate(const FmsRequest::Action action,
                                   ListAppsListsRequest * const q);
    ListAppsListsRequestPrivate(const ListAppsListsRequestPrivate &other,
                                   ListAppsListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppsListsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
