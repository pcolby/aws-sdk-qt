// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCONNECTIONRESPONSE_P_H
#define QTAWS_REJECTINBOUNDCONNECTIONRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class RejectInboundConnectionResponse;

class RejectInboundConnectionResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit RejectInboundConnectionResponsePrivate(RejectInboundConnectionResponse * const q);

    void parseRejectInboundConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectInboundConnectionResponse)
    Q_DISABLE_COPY(RejectInboundConnectionResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
