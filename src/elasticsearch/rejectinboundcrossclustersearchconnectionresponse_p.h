// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H
#define QTAWS_REJECTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class RejectInboundCrossClusterSearchConnectionResponse;

class RejectInboundCrossClusterSearchConnectionResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit RejectInboundCrossClusterSearchConnectionResponsePrivate(RejectInboundCrossClusterSearchConnectionResponse * const q);

    void parseRejectInboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectInboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(RejectInboundCrossClusterSearchConnectionResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
