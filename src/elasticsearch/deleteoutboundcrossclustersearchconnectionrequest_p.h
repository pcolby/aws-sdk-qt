// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H
#define QTAWS_DELETEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "deleteoutboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteOutboundCrossClusterSearchConnectionRequest;

class DeleteOutboundCrossClusterSearchConnectionRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DeleteOutboundCrossClusterSearchConnectionRequestPrivate(const ElasticsearchRequest::Action action,
                                   DeleteOutboundCrossClusterSearchConnectionRequest * const q);
    DeleteOutboundCrossClusterSearchConnectionRequestPrivate(const DeleteOutboundCrossClusterSearchConnectionRequestPrivate &other,
                                   DeleteOutboundCrossClusterSearchConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOutboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
