// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H
#define QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "rejectinboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class RejectInboundCrossClusterSearchConnectionRequest;

class RejectInboundCrossClusterSearchConnectionRequestPrivate : public ElasticsearchRequestPrivate {

public:
    RejectInboundCrossClusterSearchConnectionRequestPrivate(const ElasticsearchRequest::Action action,
                                   RejectInboundCrossClusterSearchConnectionRequest * const q);
    RejectInboundCrossClusterSearchConnectionRequestPrivate(const RejectInboundCrossClusterSearchConnectionRequestPrivate &other,
                                   RejectInboundCrossClusterSearchConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectInboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
