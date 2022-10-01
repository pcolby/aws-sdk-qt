// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteInboundCrossClusterSearchConnectionResponse;

class DeleteInboundCrossClusterSearchConnectionResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DeleteInboundCrossClusterSearchConnectionResponsePrivate(DeleteInboundCrossClusterSearchConnectionResponse * const q);

    void parseDeleteInboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(DeleteInboundCrossClusterSearchConnectionResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
