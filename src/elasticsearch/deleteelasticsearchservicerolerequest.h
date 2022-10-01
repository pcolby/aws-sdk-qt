// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHSERVICEROLEREQUEST_H
#define QTAWS_DELETEELASTICSEARCHSERVICEROLEREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchServiceRoleRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DeleteElasticsearchServiceRoleRequest : public ElasticsearchRequest {

public:
    DeleteElasticsearchServiceRoleRequest(const DeleteElasticsearchServiceRoleRequest &other);
    DeleteElasticsearchServiceRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteElasticsearchServiceRoleRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
