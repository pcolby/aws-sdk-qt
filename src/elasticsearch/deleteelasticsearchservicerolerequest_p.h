// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEELASTICSEARCHSERVICEROLEREQUEST_P_H
#define QTAWS_DELETEELASTICSEARCHSERVICEROLEREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "deleteelasticsearchservicerolerequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteElasticsearchServiceRoleRequest;

class DeleteElasticsearchServiceRoleRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DeleteElasticsearchServiceRoleRequestPrivate(const ElasticsearchRequest::Action action,
                                   DeleteElasticsearchServiceRoleRequest * const q);
    DeleteElasticsearchServiceRoleRequestPrivate(const DeleteElasticsearchServiceRoleRequestPrivate &other,
                                   DeleteElasticsearchServiceRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteElasticsearchServiceRoleRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
