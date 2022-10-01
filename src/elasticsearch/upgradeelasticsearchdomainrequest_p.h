// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEELASTICSEARCHDOMAINREQUEST_P_H
#define QTAWS_UPGRADEELASTICSEARCHDOMAINREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "upgradeelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class UpgradeElasticsearchDomainRequest;

class UpgradeElasticsearchDomainRequestPrivate : public ElasticsearchRequestPrivate {

public:
    UpgradeElasticsearchDomainRequestPrivate(const ElasticsearchRequest::Action action,
                                   UpgradeElasticsearchDomainRequest * const q);
    UpgradeElasticsearchDomainRequestPrivate(const UpgradeElasticsearchDomainRequestPrivate &other,
                                   UpgradeElasticsearchDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpgradeElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
