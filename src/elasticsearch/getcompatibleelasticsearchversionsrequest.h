// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSREQUEST_H
#define QTAWS_GETCOMPATIBLEELASTICSEARCHVERSIONSREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetCompatibleElasticsearchVersionsRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT GetCompatibleElasticsearchVersionsRequest : public ElasticsearchRequest {

public:
    GetCompatibleElasticsearchVersionsRequest(const GetCompatibleElasticsearchVersionsRequest &other);
    GetCompatibleElasticsearchVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCompatibleElasticsearchVersionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
