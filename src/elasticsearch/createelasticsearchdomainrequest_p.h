// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEELASTICSEARCHDOMAINREQUEST_P_H
#define QTAWS_CREATEELASTICSEARCHDOMAINREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "createelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateElasticsearchDomainRequest;

class CreateElasticsearchDomainRequestPrivate : public ElasticsearchRequestPrivate {

public:
    CreateElasticsearchDomainRequestPrivate(const ElasticsearchRequest::Action action,
                                   CreateElasticsearchDomainRequest * const q);
    CreateElasticsearchDomainRequestPrivate(const CreateElasticsearchDomainRequestPrivate &other,
                                   CreateElasticsearchDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
