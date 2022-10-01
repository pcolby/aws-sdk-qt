// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESREQUEST_P_H
#define QTAWS_LISTDOMAINNAMESREQUEST_P_H

#include "appsyncrequest_p.h"
#include "listdomainnamesrequest.h"

namespace QtAws {
namespace AppSync {

class ListDomainNamesRequest;

class ListDomainNamesRequestPrivate : public AppSyncRequestPrivate {

public:
    ListDomainNamesRequestPrivate(const AppSyncRequest::Action action,
                                   ListDomainNamesRequest * const q);
    ListDomainNamesRequestPrivate(const ListDomainNamesRequestPrivate &other,
                                   ListDomainNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainNamesRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
