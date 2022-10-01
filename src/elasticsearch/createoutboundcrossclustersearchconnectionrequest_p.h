// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H
#define QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "createoutboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateOutboundCrossClusterSearchConnectionRequest;

class CreateOutboundCrossClusterSearchConnectionRequestPrivate : public ElasticsearchRequestPrivate {

public:
    CreateOutboundCrossClusterSearchConnectionRequestPrivate(const ElasticsearchRequest::Action action,
                                   CreateOutboundCrossClusterSearchConnectionRequest * const q);
    CreateOutboundCrossClusterSearchConnectionRequestPrivate(const CreateOutboundCrossClusterSearchConnectionRequestPrivate &other,
                                   CreateOutboundCrossClusterSearchConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOutboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
