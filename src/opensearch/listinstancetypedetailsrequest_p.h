// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCETYPEDETAILSREQUEST_P_H
#define QTAWS_LISTINSTANCETYPEDETAILSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "listinstancetypedetailsrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListInstanceTypeDetailsRequest;

class ListInstanceTypeDetailsRequestPrivate : public OpenSearchRequestPrivate {

public:
    ListInstanceTypeDetailsRequestPrivate(const OpenSearchRequest::Action action,
                                   ListInstanceTypeDetailsRequest * const q);
    ListInstanceTypeDetailsRequestPrivate(const ListInstanceTypeDetailsRequestPrivate &other,
                                   ListInstanceTypeDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceTypeDetailsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
