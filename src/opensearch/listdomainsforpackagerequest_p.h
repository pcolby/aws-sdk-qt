// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSFORPACKAGEREQUEST_P_H
#define QTAWS_LISTDOMAINSFORPACKAGEREQUEST_P_H

#include "opensearchrequest_p.h"
#include "listdomainsforpackagerequest.h"

namespace QtAws {
namespace OpenSearch {

class ListDomainsForPackageRequest;

class ListDomainsForPackageRequestPrivate : public OpenSearchRequestPrivate {

public:
    ListDomainsForPackageRequestPrivate(const OpenSearchRequest::Action action,
                                   ListDomainsForPackageRequest * const q);
    ListDomainsForPackageRequestPrivate(const ListDomainsForPackageRequestPrivate &other,
                                   ListDomainsForPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainsForPackageRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
