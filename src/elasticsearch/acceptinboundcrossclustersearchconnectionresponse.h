// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H
#define QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H

#include "elasticsearchresponse.h"
#include "acceptinboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class AcceptInboundCrossClusterSearchConnectionResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT AcceptInboundCrossClusterSearchConnectionResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    AcceptInboundCrossClusterSearchConnectionResponse(const AcceptInboundCrossClusterSearchConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptInboundCrossClusterSearchConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(AcceptInboundCrossClusterSearchConnectionResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
