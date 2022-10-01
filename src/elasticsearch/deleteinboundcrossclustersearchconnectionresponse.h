// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H
#define QTAWS_DELETEINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H

#include "elasticsearchresponse.h"
#include "deleteinboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteInboundCrossClusterSearchConnectionResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DeleteInboundCrossClusterSearchConnectionResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DeleteInboundCrossClusterSearchConnectionResponse(const DeleteInboundCrossClusterSearchConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInboundCrossClusterSearchConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(DeleteInboundCrossClusterSearchConnectionResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
