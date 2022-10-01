// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINSREQUEST_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINSREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainsRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeElasticsearchDomainsRequest : public ElasticsearchRequest {

public:
    DescribeElasticsearchDomainsRequest(const DescribeElasticsearchDomainsRequest &other);
    DescribeElasticsearchDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticsearchDomainsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
