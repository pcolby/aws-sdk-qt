// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCONNECTIONRESPONSE_P_H
#define QTAWS_ACCEPTINBOUNDCONNECTIONRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class AcceptInboundConnectionResponse;

class AcceptInboundConnectionResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit AcceptInboundConnectionResponsePrivate(AcceptInboundConnectionResponse * const q);

    void parseAcceptInboundConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptInboundConnectionResponse)
    Q_DISABLE_COPY(AcceptInboundConnectionResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
