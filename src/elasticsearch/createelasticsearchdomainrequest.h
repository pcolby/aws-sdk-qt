// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEELASTICSEARCHDOMAINREQUEST_H
#define QTAWS_CREATEELASTICSEARCHDOMAINREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateElasticsearchDomainRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT CreateElasticsearchDomainRequest : public ElasticsearchRequest {

public:
    CreateElasticsearchDomainRequest(const CreateElasticsearchDomainRequest &other);
    CreateElasticsearchDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
