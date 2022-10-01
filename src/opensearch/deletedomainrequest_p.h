// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINREQUEST_P_H
#define QTAWS_DELETEDOMAINREQUEST_P_H

#include "opensearchrequest_p.h"
#include "deletedomainrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteDomainRequest;

class DeleteDomainRequestPrivate : public OpenSearchRequestPrivate {

public:
    DeleteDomainRequestPrivate(const OpenSearchRequest::Action action,
                                   DeleteDomainRequest * const q);
    DeleteDomainRequestPrivate(const DeleteDomainRequestPrivate &other,
                                   DeleteDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
