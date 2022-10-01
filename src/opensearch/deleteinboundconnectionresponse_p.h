// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEINBOUNDCONNECTIONRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DeleteInboundConnectionResponse;

class DeleteInboundConnectionResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DeleteInboundConnectionResponsePrivate(DeleteInboundConnectionResponse * const q);

    void parseDeleteInboundConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInboundConnectionResponse)
    Q_DISABLE_COPY(DeleteInboundConnectionResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
