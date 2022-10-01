// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESFORDOMAINREQUEST_P_H
#define QTAWS_LISTPACKAGESFORDOMAINREQUEST_P_H

#include "opensearchrequest_p.h"
#include "listpackagesfordomainrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListPackagesForDomainRequest;

class ListPackagesForDomainRequestPrivate : public OpenSearchRequestPrivate {

public:
    ListPackagesForDomainRequestPrivate(const OpenSearchRequest::Action action,
                                   ListPackagesForDomainRequest * const q);
    ListPackagesForDomainRequestPrivate(const ListPackagesForDomainRequestPrivate &other,
                                   ListPackagesForDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackagesForDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
