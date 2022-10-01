// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESREQUEST_P_H
#define QTAWS_LISTDOMAINNAMESREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "listdomainnamesrequest.h"

namespace QtAws {
namespace CloudSearch {

class ListDomainNamesRequest;

class ListDomainNamesRequestPrivate : public CloudSearchRequestPrivate {

public:
    ListDomainNamesRequestPrivate(const CloudSearchRequest::Action action,
                                   ListDomainNamesRequest * const q);
    ListDomainNamesRequestPrivate(const ListDomainNamesRequestPrivate &other,
                                   ListDomainNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainNamesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
