// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCONNECTIONRESPONSE_P_H
#define QTAWS_CREATEOUTBOUNDCONNECTIONRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class CreateOutboundConnectionResponse;

class CreateOutboundConnectionResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit CreateOutboundConnectionResponsePrivate(CreateOutboundConnectionResponse * const q);

    void parseCreateOutboundConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOutboundConnectionResponse)
    Q_DISABLE_COPY(CreateOutboundConnectionResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
