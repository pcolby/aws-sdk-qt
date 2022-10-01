// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_H
#define QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class RejectInboundCrossClusterSearchConnectionRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT RejectInboundCrossClusterSearchConnectionRequest : public ElasticsearchRequest {

public:
    RejectInboundCrossClusterSearchConnectionRequest(const RejectInboundCrossClusterSearchConnectionRequest &other);
    RejectInboundCrossClusterSearchConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
