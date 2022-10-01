// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H
#define QTAWS_ACCEPTINBOUNDCROSSCLUSTERSEARCHCONNECTIONRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class AcceptInboundCrossClusterSearchConnectionResponse;

class AcceptInboundCrossClusterSearchConnectionResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit AcceptInboundCrossClusterSearchConnectionResponsePrivate(AcceptInboundCrossClusterSearchConnectionResponse * const q);

    void parseAcceptInboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptInboundCrossClusterSearchConnectionResponse)
    Q_DISABLE_COPY(AcceptInboundCrossClusterSearchConnectionResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
