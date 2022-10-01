// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINREQUEST_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchDomainRequest : public ElasticsearchRequest {

public:
    DescribeElasticsearchDomainRequest(const DescribeElasticsearchDomainRequest &other);
    DescribeElasticsearchDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
