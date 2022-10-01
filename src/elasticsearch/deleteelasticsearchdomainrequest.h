// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHDOMAINREQUEST_H
#define QTAWS_DELETEELASTICSEARCHDOMAINREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchDomainRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DeleteElasticsearchDomainRequest : public ElasticsearchRequest {

public:
    DeleteElasticsearchDomainRequest(const DeleteElasticsearchDomainRequest &other);
    DeleteElasticsearchDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
