// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSREQUEST_P_H
#define QTAWS_LISTVERSIONSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "listversionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListVersionsRequest;

class ListVersionsRequestPrivate : public OpenSearchRequestPrivate {

public:
    ListVersionsRequestPrivate(const OpenSearchRequest::Action action,
                                   ListVersionsRequest * const q);
    ListVersionsRequestPrivate(const ListVersionsRequestPrivate &other,
                                   ListVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVersionsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
