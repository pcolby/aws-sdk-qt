// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHDOMAINREQUEST_P_H
#define QTAWS_DELETEELASTICSEARCHDOMAINREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "deleteelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchDomainRequest;

class DeleteElasticsearchDomainRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DeleteElasticsearchDomainRequestPrivate(const ElasticsearchRequest::Action action,
                                   DeleteElasticsearchDomainRequest * const q);
    DeleteElasticsearchDomainRequestPrivate(const DeleteElasticsearchDomainRequestPrivate &other,
                                   DeleteElasticsearchDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
