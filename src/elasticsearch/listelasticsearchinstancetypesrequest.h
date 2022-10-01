// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTELASTICSEARCHINSTANCETYPESREQUEST_H
#define QTAWS_LISTELASTICSEARCHINSTANCETYPESREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ListElasticsearchInstanceTypesRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT ListElasticsearchInstanceTypesRequest : public ElasticsearchRequest {

public:
    ListElasticsearchInstanceTypesRequest(const ListElasticsearchInstanceTypesRequest &other);
    ListElasticsearchInstanceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListElasticsearchInstanceTypesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
