// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSREQUEST_P_H
#define QTAWS_LISTDOMAINSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listdomainsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListDomainsRequest;

class ListDomainsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListDomainsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListDomainsRequest * const q);
    ListDomainsRequestPrivate(const ListDomainsRequestPrivate &other,
                                   ListDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
