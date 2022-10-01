// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H
#define QTAWS_DELETEINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "deleteinboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteInboundCrossClusterSearchConnectionRequest;

class DeleteInboundCrossClusterSearchConnectionRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DeleteInboundCrossClusterSearchConnectionRequestPrivate(const ElasticsearchRequest::Action action,
                                   DeleteInboundCrossClusterSearchConnectionRequest * const q);
    DeleteInboundCrossClusterSearchConnectionRequestPrivate(const DeleteInboundCrossClusterSearchConnectionRequestPrivate &other,
                                   DeleteInboundCrossClusterSearchConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
