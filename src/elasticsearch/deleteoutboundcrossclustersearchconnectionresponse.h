// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H
#define QTAWS_DELETEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H

#include "elasticsearchresponse.h"
#include "deleteoutboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteOutboundCrossClusterSearchConnectionResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DeleteOutboundCrossClusterSearchConnectionResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DeleteOutboundCrossClusterSearchConnectionResponse(const DeleteOutboundCrossClusterSearchConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOutboundCrossClusterSearchConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOutboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(DeleteOutboundCrossClusterSearchConnectionResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
