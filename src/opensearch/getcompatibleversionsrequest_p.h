// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEVERSIONSREQUEST_P_H
#define QTAWS_GETCOMPATIBLEVERSIONSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "getcompatibleversionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetCompatibleVersionsRequest;

class GetCompatibleVersionsRequestPrivate : public OpenSearchRequestPrivate {

public:
    GetCompatibleVersionsRequestPrivate(const OpenSearchRequest::Action action,
                                   GetCompatibleVersionsRequest * const q);
    GetCompatibleVersionsRequestPrivate(const GetCompatibleVersionsRequestPrivate &other,
                                   GetCompatibleVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCompatibleVersionsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
