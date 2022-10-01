// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGREQUEST_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainConfigRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchDomainConfigRequest : public ElasticsearchRequest {

public:
    DescribeElasticsearchDomainConfigRequest(const DescribeElasticsearchDomainConfigRequest &other);
    DescribeElasticsearchDomainConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchDomainConfigRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
