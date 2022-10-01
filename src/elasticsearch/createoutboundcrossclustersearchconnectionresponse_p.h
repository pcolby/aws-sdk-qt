// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H
#define QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class CreateOutboundCrossClusterSearchConnectionResponse;

class CreateOutboundCrossClusterSearchConnectionResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit CreateOutboundCrossClusterSearchConnectionResponsePrivate(CreateOutboundCrossClusterSearchConnectionResponse * const q);

    void parseCreateOutboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOutboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(CreateOutboundCrossClusterSearchConnectionResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
