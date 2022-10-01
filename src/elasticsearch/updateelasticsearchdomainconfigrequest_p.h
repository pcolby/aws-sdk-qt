// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGREQUEST_P_H
#define QTAWS_UPDATEELASTICSEARCHDOMAINCONFIGREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "updateelasticsearchdomainconfigrequest.h"

namespace QtAws {
namespace Elasticsearch {

class UpdateElasticsearchDomainConfigRequest;

class UpdateElasticsearchDomainConfigRequestPrivate : public ElasticsearchRequestPrivate {

public:
    UpdateElasticsearchDomainConfigRequestPrivate(const ElasticsearchRequest::Action action,
                                   UpdateElasticsearchDomainConfigRequest * const q);
    UpdateElasticsearchDomainConfigRequestPrivate(const UpdateElasticsearchDomainConfigRequestPrivate &other,
                                   UpdateElasticsearchDomainConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateElasticsearchDomainConfigRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
