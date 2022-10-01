// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H
#define QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_H

#include "elasticsearchresponse.h"
#include "createoutboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateOutboundCrossClusterSearchConnectionResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT CreateOutboundCrossClusterSearchConnectionResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    CreateOutboundCrossClusterSearchConnectionResponse(const CreateOutboundCrossClusterSearchConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOutboundCrossClusterSearchConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOutboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(CreateOutboundCrossClusterSearchConnectionResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
