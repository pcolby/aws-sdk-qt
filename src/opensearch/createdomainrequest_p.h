// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINREQUEST_P_H
#define QTAWS_CREATEDOMAINREQUEST_P_H

#include "opensearchrequest_p.h"
#include "createdomainrequest.h"

namespace QtAws {
namespace OpenSearch {

class CreateDomainRequest;

class CreateDomainRequestPrivate : public OpenSearchRequestPrivate {

public:
    CreateDomainRequestPrivate(const OpenSearchRequest::Action action,
                                   CreateDomainRequest * const q);
    CreateDomainRequestPrivate(const CreateDomainRequestPrivate &other,
                                   CreateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
