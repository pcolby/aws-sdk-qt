// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H
#define QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H

#include "elasticsearchresponse.h"
#include "rejectinboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class RejectInboundCrossClusterSearchConnectionResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT RejectInboundCrossClusterSearchConnectionResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    RejectInboundCrossClusterSearchConnectionResponse(const RejectInboundCrossClusterSearchConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectInboundCrossClusterSearchConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(RejectInboundCrossClusterSearchConnectionResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
