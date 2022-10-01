// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEELASTICSEARCHDOMAINREQUEST_H
#define QTAWS_UPGRADEELASTICSEARCHDOMAINREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class UpgradeElasticsearchDomainRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT UpgradeElasticsearchDomainRequest : public ElasticsearchRequest {

public:
    UpgradeElasticsearchDomainRequest(const UpgradeElasticsearchDomainRequest &other);
    UpgradeElasticsearchDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
