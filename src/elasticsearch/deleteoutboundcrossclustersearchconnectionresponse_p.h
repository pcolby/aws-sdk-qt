// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DeleteOutboundCrossClusterSearchConnectionResponse;

class DeleteOutboundCrossClusterSearchConnectionResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DeleteOutboundCrossClusterSearchConnectionResponsePrivate(DeleteOutboundCrossClusterSearchConnectionResponse * const q);

    void parseDeleteOutboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOutboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(DeleteOutboundCrossClusterSearchConnectionResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
