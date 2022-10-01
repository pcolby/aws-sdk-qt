// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H
#define QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "acceptinboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class AcceptInboundCrossClusterSearchConnectionRequest;

class AcceptInboundCrossClusterSearchConnectionRequestPrivate : public ElasticsearchRequestPrivate {

public:
    AcceptInboundCrossClusterSearchConnectionRequestPrivate(const ElasticsearchRequest::Action action,
                                   AcceptInboundCrossClusterSearchConnectionRequest * const q);
    AcceptInboundCrossClusterSearchConnectionRequestPrivate(const AcceptInboundCrossClusterSearchConnectionRequestPrivate &other,
                                   AcceptInboundCrossClusterSearchConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptInboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
